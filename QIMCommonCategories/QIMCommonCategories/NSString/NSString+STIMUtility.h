//
//  NSString+STIMUtility.h
//  QunariPhone
//
//  Created by Neo on 11/12/12.
//  Copyright (c) 2012 姜琢. All rights reserved.
//


#import <UIKit/UIKit.h>

@interface NSString (STIMUtility)

// URLEncoding
- (NSString *)stimDB_URLEncodedString;
- (NSString *)stimDB_URLDecodedString;
- (BOOL)stimDB_hasPrefixHttpHeader;

// XQueryComponents
- (NSString *)stimDB_stringByDecodingURLFormat;
- (NSString *)stimDB_stringByEncodingURLFormat;
- (NSDictionary *)stimDB_dictionaryFromQueryComponents;
- (NSDictionary *)stimDB_dictionaryFromParamComponents;    // 对于参数中不带＝的，用@“”作为参数值

// Encoding
- (NSString *)stimDB_getSHA1;
- (NSString *)stimDB_getMD5;

// Valid
- (BOOL)stimDB_isRangeValidFromIndex:(NSInteger)index withSize:(NSInteger)rangeSize;

// String2Date
- (NSString *)stimDB_getYYMMDDFWW;

//用 ****替换部分字符
- (NSString *)stimDB_getHidenPartString;

// 产生 hash code
+ (NSString *)stimDB_hashString:(NSString *)data withSalt:(NSString *)salt;

- (BOOL)stimDB_isStringSafe;

//检查是否包含中文
- (BOOL)stimDB_checkIsChinese;
// Trim
- (NSString *)stimDB_trimSpaceString;

// 适配函数
- (CGSize)stimDB_sizeWithFontCompatible:(UIFont *)font;
- (CGSize)stimDB_sizeWithFontCompatible:(UIFont *)font forWidth:(CGFloat)width lineBreakMode:(NSLineBreakMode)lineBreakMode;

- (CGSize)stimDB_sizeWithFontCompatible:(UIFont *)font constrainedToSize:(CGSize)size;
- (CGSize)stimDB_sizeWithFontCompatible:(UIFont *)font constrainedToSize:(CGSize)size lineBreakMode:(NSLineBreakMode)lineBreakMode;

- (void)stimDB_drawAtPointCompatible:(CGPoint)point withFont:(UIFont *)font;
- (void)stimDB_drawInRectCompatible:(CGRect)rect withFont:(UIFont *)font;
- (void)stimDB_drawInRectCompatible:(CGRect)rect withFont:(UIFont *)font lineBreakMode:(NSLineBreakMode)lineBreakMode alignment:(NSTextAlignment)alignment;

- (NSString *)stimDB_stringByEscapingXMLEntities;
- (NSString *)stimDB_stringByUnescapingEscapingXMLEntities;

@end
