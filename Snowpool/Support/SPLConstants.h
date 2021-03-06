//
//  SPLConstants.h
//  Snowpool
//
//  Created by Tim Ross on 8/03/14.
//  Copyright (c) 2014 Snowpool Limited. All rights reserved.
//

#define SPLAuthTokenKey @"SPLAuthTokenKey"
#define SPLAuthUserID @"SPLAuthUserID"

#define SPLAnalyticsTrackingID @"UA-4538469-12"

#if TARGET_IPHONE_SIMULATOR
    #define SPLServiceBaseURL @"http://api.lvh.me:3000"
#else
    #if DEBUG
        #define SPLServiceBaseURL @"http://snowpool-development.herokuapp.com"
    #else
        #define SPLServiceBaseURL @"http://api.snowpool.org"
    #endif
#endif

#ifdef DEBUG
#define DebugLog( s, ... ) NSLog( @"<%p %@:(%d)> %@", self, [[NSString stringWithUTF8String:__FILE__] lastPathComponent], __LINE__, [NSString stringWithFormat:(s), ##__VA_ARGS__] )
#else
#define DebugLog( s, ... )
#endif

#define NSStringFromBOOL(b) ((b) ? @"YES" : @"NO")
