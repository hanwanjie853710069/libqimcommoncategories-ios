//
//  NSString+Base64.h
//  qunarChatCommon
//
//  Created by May on 14/12/29.
//  Copyright (c) 2014年 May. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface NSString (STIMBase64)

+ (NSString *)stimDB_base64StringFromData:(NSData *)data length:(NSUInteger)length;
+ (NSString *)stimDB_stringWithBase64EncodedString:(NSString *)string;
- (NSString *)stimDB_base64EncodedStringWithWrapWidth:(NSUInteger)wrapWidth;
- (NSString *)stimDB_base64EncodedString;
- (NSString *)stimDB_base64DecodedString;
- (NSData *)stimDB_base64DecodedData;

@end
