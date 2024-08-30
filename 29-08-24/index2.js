async function post(){
    const res = await fetch("https://x.com/i/api/graphql/xT36w0XM3A8jDynpkram2A/CreateTweet", {
        "headers": {
          "accept": "*/*",
          "accept-language": "en-US,en;q=0.9",
          "authorization": "Bearer AAAAAAAAAAAAAAAAAAAAANRILgAAAAAAnNwIzUejRCOuH5E6I8xnZz4puTs%3D1Zv7ttfk8LF81IUq16cHjhLTvJu4FA33AGWWjCpTnA",
          "content-type": "application/json",
          "priority": "u=1, i",
          "sec-ch-ua": "\"Chromium\";v=\"128\", \"Not;A=Brand\";v=\"24\", \"Google Chrome\";v=\"128\"",
          "sec-ch-ua-mobile": "?0",
          "sec-ch-ua-platform": "\"Windows\"",
          "sec-fetch-dest": "empty",
          "sec-fetch-mode": "cors",
          "sec-fetch-site": "same-origin",
          "x-client-transaction-id": "17elmHeN30zRGjp0o314hEFbLAt6tkkwWxHrY/DLSXSVFvi3au4fBi75EG4fNqAh/xeVVtWa1iMY54Zxh26YpDVmzGV41A",
          "x-client-uuid": "5fb40394-921d-43a9-9f2b-8f86345c23ef",
          "x-csrf-token": "f7cc1cd3182c7bfb6cb9083044f0ede72e5ae617d62f916e5ac76f03de93bdd5b1e892916114c1614ba8e7c475d52dcc3aab75af3ac5c9832da5aaa3b13ecbd05f9eaea9a965908474122995a5a787d6",
          "x-twitter-active-user": "yes",
          "x-twitter-auth-type": "OAuth2Session",
          "x-twitter-client-language": "en",
          "cookie": "night_mode=2; g_state={\"i_l\":0}; kdt=tshAEUHhbI0bYxxy9fqafbaCMZRU9RyJWXuvEMqi; lang=en; dnt=1; auth_multi=\"1647274204440727552:54ff145d2530f18f4f022795125409d140494d91\"; auth_token=76c182c8145a785640eeed2826d882f1fe5dc35a; guest_id_ads=v1%3A172477548172561783; guest_id_marketing=v1%3A172477548172561783; guest_id=v1%3A172477548172561783; twid=u%3D1445037065553383434; ct0=f7cc1cd3182c7bfb6cb9083044f0ede72e5ae617d62f916e5ac76f03de93bdd5b1e892916114c1614ba8e7c475d52dcc3aab75af3ac5c9832da5aaa3b13ecbd05f9eaea9a965908474122995a5a787d6; external_referer=padhuUp37zjgzgv1mFWxJ12Ozwit7owX|0|8e8t2xd8A2w%3D; personalization_id=\"v1_a6mXkfcG/C1cWwyo34sdTA==\"",
          "Referer": "https://x.com/home",
          "Referrer-Policy": "strict-origin-when-cross-origin"
        },
        "body": "{\"variables\":{\"tweet_text\":\"coding hori bhot bhenkar\",\"dark_request\":false,\"media\":{\"media_entities\":[],\"possibly_sensitive\":false},\"semantic_annotation_ids\":[],\"disallowed_reply_options\":null},\"features\":{\"communities_web_enable_tweet_community_results_fetch\":true,\"c9s_tweet_anatomy_moderator_badge_enabled\":true,\"responsive_web_edit_tweet_api_enabled\":true,\"graphql_is_translatable_rweb_tweet_is_translatable_enabled\":true,\"view_counts_everywhere_api_enabled\":true,\"longform_notetweets_consumption_enabled\":true,\"responsive_web_twitter_article_tweet_consumption_enabled\":true,\"tweet_awards_web_tipping_enabled\":false,\"creator_subscriptions_quote_tweet_preview_enabled\":false,\"longform_notetweets_rich_text_read_enabled\":true,\"longform_notetweets_inline_media_enabled\":true,\"articles_preview_enabled\":true,\"rweb_video_timestamps_enabled\":true,\"rweb_tipjar_consumption_enabled\":true,\"responsive_web_graphql_exclude_directive_enabled\":true,\"verified_phone_label_enabled\":true,\"freedom_of_speech_not_reach_fetch_enabled\":true,\"standardized_nudges_misinfo\":true,\"tweet_with_visibility_results_prefer_gql_limited_actions_policy_enabled\":true,\"responsive_web_graphql_skip_user_profile_image_extensions_enabled\":false,\"responsive_web_graphql_timeline_navigation_enabled\":true,\"responsive_web_enhance_cards_enabled\":false},\"queryId\":\"xT36w0XM3A8jDynpkram2A\"}",
        "method": "POST"
      });

      console.log(res);
}

post()


