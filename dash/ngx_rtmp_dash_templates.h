#ifndef _NGX_RTMP_DASH_TEMPLATES
#define _NGX_RTMP_DASH_TEMPLATES


#define NGX_RTMP_DASH_MANIFEST_HEADER                                          \
    "<?xml version=\"1.0\"?>\n"                                                \
    "<MPD\n"                                                                   \
    "    type=\"dynamic\"\n"                                                   \
    "    xmlns=\"urn:mpeg:dash:schema:mpd:2011\"\n"                            \
    "    availabilityStartTime=\"%s\"\n"                                       \
    "    publishTime=\"%s\"\n"                                                 \
    "    minimumUpdatePeriod=\"PT%ui.%03uiS\"\n"                               \
    "    minBufferTime=\"PT%ui.%03uiS\"\n"                                     \
    "    timeShiftBufferDepth=\"%s\"\n"                                        \
    "    suggestedPresentationDelay=\"PT%ui.%03uiS\"\n"                        \
    "    profiles=\"urn:hbbtv:dash:profile:isoff-live:2012,"                   \
                   "urn:mpeg:dash:profile:isoff-live:2011\"\n"                 \
    "    xmlns:xsi=\"http://www.w3.org/2011/XMLSchema-instance\"\n"            \
    "    xsi:schemaLocation=\"urn:mpeg:DASH:schema:MPD:2011 DASH-MPD.xsd\">\n"


#define NGX_RTMP_DASH_MANIFEST_PERIOD                                          \
    "  <Period start=\"PT0S\" id=\"dash\">\n"

#define NGX_RTMP_DASH_INBAND_EVENT                                             \
    "    <InbandEventStream\n"                                                 \
    "        schemeIdUri=\"urn:scte:scte35:2013:xml\"\n"                       \
    "        value=\"1\" />\n"

#define NGX_RTMP_DASH_MANIFEST_ADAPTATIONSET_VIDEO                             \
    "    <AdaptationSet\n"                                                     \
    "        id=\"1\"\n"                                                       \
    "        startWithSAP=\"1\"\n"                                             \
    "        segmentAlignment=\"true\"\n"                                      \
    "        maxWidth=\"%ui\"\n"                                               \
    "        maxHeight=\"%ui\"\n"                                              \
    "        maxFrameRate=\"%s\"\n"                                            \
    "        par=\"%ui:%ui\">\n"


#define NGX_RTMP_DASH_MANIFEST_REPRESENTATION_VIDEO                            \
    "      <Representation\n"                                                  \
    "          id=\"%V_H264\"\n"                                               \
    "          mimeType=\"video/mp4\"\n"                                       \
    "          codecs=\"avc1.%02uxi%02uxi%02uxi\"\n"                           \
    "          width=\"%ui\"\n"                                                \
    "          height=\"%ui\"\n"                                               \
    "          frameRate=\"%s\"\n"                                             \
    "          sar=\"1:1\"\n"                                                  \
    "          bandwidth=\"%ui\">\n"                                           \
    "        <SegmentTemplate\n"                                               \
    "            presentationTimeOffset=\"0\"\n"                               \
    "            timescale=\"1000\"\n"                                         \
    "            media=\"%V%s$Time$.m4v\"\n"                                   \
    "            initialization=\"%V%sinit.m4v\">\n"                           \
    "          <SegmentTimeline>\n"


#define NGX_RTMP_DASH_MANIFEST_REPRESENTATION_VARIANT_VIDEO                    \
    "      <Representation\n"                                                  \
    "          id=\"%V%V_H264\"\n"                                             \
    "          mimeType=\"video/mp4\"\n"                                       \
    "          codecs=\"avc1.%02uxi%02uxi%02uxi\"\n"                           \
    "          sar=\"1:1\"\n"                                                  \


#define NGX_RTMP_DASH_MANIFEST_VARIANT_ARG                                     \
    "          %V\n"


#define NGX_RTMP_DASH_MANIFEST_VARIANT_ARG_FOOTER                              \
    "          >\n"


#define NGX_RTMP_DASH_MANIFEST_SEGMENTTPL_VARIANT_VIDEO                        \
    "        <SegmentTemplate\n"                                               \
    "            presentationTimeOffset=\"0\"\n"                               \
    "            timescale=\"1000\"\n"                                         \
    "            media=\"%V%V%s$Time$.m4v\"\n"                                 \
    "            initialization=\"%V%V%sinit.m4v\">\n"                         \
    "          <SegmentTimeline>\n"


#define NGX_RTMP_DASH_MANIFEST_REPRESENTATION_VIDEO_FOOTER                     \
    "          </SegmentTimeline>\n"                                           \
    "        </SegmentTemplate>\n"                                             \
    "      </Representation>\n"


#define NGX_RTMP_DASH_MANIFEST_ADAPTATIONSET_VIDEO_FOOTER                      \
    "    </AdaptationSet>\n"


#define NGX_RTMP_DASH_MANIFEST_TIME                                            \
    "             <S t=\"%uD\" d=\"%uD\"/>\n"


#define NGX_RTMP_DASH_MANIFEST_ADAPTATIONSET_AUDIO                             \
    "    <AdaptationSet\n"                                                     \
    "        id=\"2\"\n"                                                       \
    "        startWithSAP=\"1\"\n"                                             \
    "        segmentAlignment=\"true\">\n"                                     \
    "      <AudioChannelConfiguration\n"                                       \
    "          schemeIdUri=\"urn:mpeg:dash:"                                   \
                                "23003:3:audio_channel_configuration:2011\"\n" \
    "          value=\"1\"/>\n"


#define NGX_RTMP_DASH_MANIFEST_REPRESENTATION_AUDIO                            \
    "      <Representation\n"                                                  \
    "          id=\"%V_AAC\"\n"                                                \
    "          mimeType=\"audio/mp4\"\n"                                       \
    "          codecs=\"mp4a.%s\"\n"                                           \
    "          audioSamplingRate=\"%ui\"\n"                                    \
    "          bandwidth=\"%ui\">\n"                                           \
    "        <SegmentTemplate\n"                                               \
    "            presentationTimeOffset=\"0\"\n"                               \
    "            timescale=\"1000\"\n"                                         \
    "            media=\"%V%s$Time$.m4a\"\n"                                   \
    "            initialization=\"%V%sinit.m4a\">\n"                           \
    "          <SegmentTimeline>\n"


#define NGX_RTMP_DASH_MANIFEST_REPRESENTATION_AUDIO_FOOTER                     \
    "          </SegmentTimeline>\n"                                           \
    "        </SegmentTemplate>\n"                                             \
    "      </Representation>\n"


#define NGX_RTMP_DASH_MANIFEST_ADAPTATIONSET_AUDIO_FOOTER                      \
    "    </AdaptationSet>\n"


#define NGX_RTMP_DASH_PERIOD_FOOTER                                          \
    "  </Period>\n"


#define NGX_RTMP_DASH_MANIFEST_CLOCK                                           \
    "  <UTCTiming schemeIdUri=\"urn:mpeg:dash:utc:%s:2014\"\n"                 \
    "       value=\"%V\" />\n"


#define NGX_RTMP_DASH_MANIFEST_FOOTER                                          \
    "</MPD>\n"


#endif
