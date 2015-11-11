﻿using System.Collections.Generic;
using MediaPortal.Plugins.MP2Extended.WSS.Profiles;

namespace MediaPortal.Plugins.MP2Extended.ResourceAccess.WSS.json.Profiles.BaseClasses
{
  class BaseTranscoderProfile
  {
    internal WebTranscoderProfile TranscoderProfile(KeyValuePair<string, EndPointProfile> profile)
    {
      WebTranscoderProfile webTranscoderProfile = new WebTranscoderProfile
      {
        Bandwidth = 2280,
        Description = profile.Value.Name,
        HasVideoStream = true,
        MIME = "video/MP2T",
        MaxOutputHeight = profile.Value.Settings.Video.MaxHeight,
        MaxOutputWidth = profile.Value.Settings.Video.MaxHeight,
        Name = profile.Value.ID,
        Targets = profile.Value.Targets,
        Transport = "http"
      };

      return webTranscoderProfile;
    }
  }
}