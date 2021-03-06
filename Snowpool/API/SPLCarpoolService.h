//
//  SPLCarpoolService.h
//  Snowpool
//
//  Created by Tim Ross on 9/03/14.
//  Copyright (c) 2014 Snowpool Limited. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SPLCreateCarpoolViewModel;

@interface SPLCarpoolService : NSObject

- (void)requestCarpoolsForCountryID:(NSNumber *)countryID
                            success:(void (^)(NSArray *carpools))success
                            failure:(void (^)(NSError *error))failure;

- (void)createCarpoolWithFieldID:(NSInteger)fieldID
                     dateLeaving:(NSString *)dateLeaving
                   dateReturning:(NSString *)dateReturning
                      spacesFree:(NSInteger)spacesFree
                     leavingFrom:(NSString *)leavingFrom
                       telephone:(NSString *)telephone
                   carpoolWanted:(Boolean)carpoolWanted
                drivenHereBefore:(Boolean)drivenHereBefore
                         message:(NSString *)message
                            success:(void (^)())success
                            failure:(void (^)(NSError *error, NSInteger statusCode, NSDictionary *errorMessages))failure;

- (void)sendMessageToCarpoolWithID:(NSInteger)carpoolID
                           message:(NSString *)message
                           success:(void (^)())success
                           failure:(void (^)(NSError *error, NSInteger statusCode))failure;

- (void)deleteCarpoolWithID:(NSInteger)carpoolID
                    success:(void (^)())success
                    failure:(void (^)(NSError *error, NSInteger statusCode))failure;

- (void)cancel;

@end
