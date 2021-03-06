﻿using System.Collections.Generic;
using System.Runtime.Serialization;

namespace MediaPortal.Extensions.OnlineLibraries.Libraries.Trakt.DataStructures
{
  [DataContract]
  public class TraktSyncMoviesWatched
  {
    [DataMember(Name = "movies")]
    public List<TraktSyncMovieWatched> Movies { get; set; }
  }
}