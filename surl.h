//
//  surl.h
//  Surl
//
//  Created by Tang Tianyong on 8/15/16.
//  Copyright © 2016 LeanCloud. All rights reserved.
//

#ifndef surl_h
#define surl_h

#import <stdbool.h>
#import <curl/curl.h>

#define CURL_INLINE extern inline

typedef size_t (*curl_func)(char * ptr, size_t size, size_t num, void * ud);

CURL_INLINE CURLcode curl_easy_setopt_string(CURL *curl, CURLoption option, const char *param) {
    return curl_easy_setopt(curl, option, param);
}

CURL_INLINE CURLcode curl_easy_setopt_bool(CURL *curl, CURLoption option, bool param) {
    return curl_easy_setopt(curl, option, param);
}

CURL_INLINE CURLcode curl_easy_setopt_func(CURL *handle, CURLoption option, curl_func param)
{
    return curl_easy_setopt(handle, option, param);
}

CURL_INLINE CURLcode curl_easy_setopt_pointer(CURL *handle, CURLoption option, const void* param)
{
    return curl_easy_setopt(handle, option, param);
}

CURL_INLINE CURLcode curl_easy_setopt_long(CURL *curl, CURLoption option, long param) {
    return curl_easy_setopt(curl, option, param);
}

CURL_INLINE CURLcode curl_easy_setopt_slist(CURL *curl, CURLoption option, struct curl_slist *param) {
    return curl_easy_setopt(curl, option, param);
}

CURL_INLINE CURLcode curl_easy_getinfo_long(CURL *handle, CURLINFO option, long *param)
{
    return curl_easy_getinfo(handle, option, param);
}

CURL_INLINE CURLcode curl_easy_getinfo_string(CURL *handle, CURLINFO option, const char **param)
{
    return curl_easy_getinfo(handle, option, param);
}

CURL_INLINE CURLcode curl_easy_getinfo_double(CURL *handle, CURLINFO option, double *param)
{
    return curl_easy_getinfo(handle, option, param);
}

CURL_INLINE CURLcode curl_easy_getinfo_slist(CURL *handle, CURLINFO option, struct curl_slist **param)
{
    return curl_easy_getinfo(handle, option, param);
}

#endif /* surl_h */
