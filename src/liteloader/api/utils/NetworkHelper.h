#pragma once

#include "httplib.h"
#include "liteloader/api/base/Global.h"
#include <functional>
#include <string>

// "http(s)://www.aaa.com/bbb/c.html"    ->    ""http(s)://www.aaa.com"  &  "/bbb/c.html"
LLAPI void SplitHttpUrl(const std::string& url, std::string& host, std::string& path);

// Http Post (async)
// [param] void callback(status, data)
LLAPI bool HttpPost(
    const std::string&                           url,
    const httplib::Headers&                      headers,
    const std::string&                           data,
    const std::string&                           type,
    const std::function<void(int, std::string)>& callback,
    int                                          timeout = -1
);
LLAPI bool HttpPost(
    const std::string&                           url,
    const std::string&                           data,
    const std::string&                           type,
    const std::function<void(int, std::string)>& callback,
    int                                          timeout = -1
);
// Http Get (async)
// [param] void callback(status, data)
LLAPI bool HttpGet(
    const std::string&                           url,
    const httplib::Headers&                      headers,
    const std::function<void(int, std::string)>& callback,
    int                                          timeout = -1
);
LLAPI bool HttpGet(const std::string& url, const std::function<void(int, std::string)>& callback, int timeout = -1);

// Http Get (sync)
// [return] {status, data}
LLAPI bool
HttpGetSync(const std::string& url, int* statusRtn = nullptr, std::string* dataRtn = nullptr, int timeout = -1);