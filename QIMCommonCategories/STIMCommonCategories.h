//
//  STIMCommonCategories.h
//  STIMCommonCategories
//
//  Created by 李海彬 on 2018/4/28.
//  Copyright © 2018年 STIM. All rights reserved.
//

#import <UIKit/UIKit.h>

#if __has_include(<QIMCommonCategories/STIMCommonCategories.h>)
//! Project version number for STIMCommonCategories.
FOUNDATION_EXPORT double STIMCommonCategoriesVersionNumber;

//! Project version string for STIMCommonCategories.
FOUNDATION_EXPORT const unsigned char STIMCommonCategoriesVersionString[];

#import <QIMCommonCategories/NSBundle+STIMLibrary.h>
#import <QIMCommonCategories/NSData+STIMBase64.h>
#import <QIMCommonCategories/NSData+STIMMD5.h>
#import <QIMCommonCategories/NSData+STIMCommonCrypto.h>
#import <QIMCommonCategories/NSData+STIMHookContentsOfFile.h>
#import <QIMCommonCategories/NSDate+STIMCategory.h>
#import <QIMCommonCategories/NSDateFormatter+STIMCategory.h>
#import <QIMCommonCategories/NSMutableDictionary+STIMSafe.h>

#import <QIMCommonCategories/NSObject+STIMRuntime.h>
#import <QIMCommonCategories/NSString+STIMBase64.h>
#import <QIMCommonCategories/NSString+STIMUtility.h>
#import <QIMCommonCategories/UIColor-Expanded.h>
#import <QIMCommonCategories/UIColor+STIMUtility.h>
#import <QIMCommonCategories/UIImage+STIMImageEffects.h>
#import <QIMCommonCategories/UIImage+STIMAnimatedGIF.h>
#import <QIMCommonCategories/UIImage+STIMUtility.h>
#import <QIMCommonCategories/UIImage+STIMRotate.h>
#import <QIMCommonCategories/UIImage+STIMTint.h>
#import <QIMCommonCategories/UIView+STIMExtension.h>
#import <QIMCommonCategories/UIView+TTCategory.h>

#else
#import "NSBundle+STIMLibrary.h"
#import "NSData+STIMBase64.h"
#import "NSData+STIMMD5.h"
#import "NSData+STIMCommonCrypto.h"
#import "NSData+STIMHookContentsOfFile.h"
#import "NSDate+STIMCategory.h"
#import "NSDateFormatter+STIMCategory.h"
#import "NSMutableDictionary+STIMSafe.h"

#import "NSObject+STIMRuntime.h"
#import "NSString+STIMBase64.h"
#import "NSString+STIMUtility.h"
#import "UIColor-Expanded.h"
#import "UIColor+STIMUtility.h"
#import "UIImage+STIMImageEffects.h"
#import "UIImage+STIMAnimatedGIF.h"
#import "UIImage+STIMUtility.h"
#import "UIImage+STIMRotate.h"
#import "UIImage+STIMTint.h"
#import "UIView+STIMExtension.h"
#import "UIView+TTCategory.h"
#endif
