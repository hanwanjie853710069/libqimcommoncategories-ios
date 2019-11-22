//
//  NSData+Base64.h
//  qunarChatCommon
//
//  Created by May on 14/12/29.
//  Copyright (c) 2014年 May. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface NSData (STIMBase64)

+ (NSData *)stimDB_dataWithBase64EncodedString:(NSString *)string;
- (NSString *)stimDB_base64EncodedStringWithWrapWidth:(NSUInteger)wrapWidth;
- (NSString *)stimDB_base64EncodedString;
+ (NSData *)stimDB_base64DataFromString:(NSString *)string;

@end
