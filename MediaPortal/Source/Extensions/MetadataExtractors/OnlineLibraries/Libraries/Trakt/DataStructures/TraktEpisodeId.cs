﻿using System.Runtime.Serialization;

namespace MediaPortal.Extensions.OnlineLibraries.Libraries.Trakt.DataStructures
{
  [DataContract]
  public class TraktEpisodeId : TraktId
  {
    [DataMember(Name = "imdb")]
    public string Imdb { get; set; }

    [DataMember(Name = "tmdb")]
    public int? Tmdb { get; set; }

    [DataMember(Name = "tvdb")]
    public int? Tvdb { get; set; }

    [DataMember(Name = "tvrage")]
    public int? TvRage { get; set; }
  }
}