//
//  NSBundle+STIMLibrary.h
//  STIMCommonCategories
//
//  Created by 李露 on 2018/5/29.
//  Copyright © 2018年 STIM. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSBundle (STIMLibrary)

+ (NSBundle *)qimBundleWithClassName:(NSString *)className BundleName:(NSString *)bundleName;

+ (NSString *)stimDB_myLibraryResourcePathWithClassName:(NSString *)className BundleName:(NSString *)bundleName pathForResource:(nullable NSString *)name ofType:(nullable NSString *)ext;

+ (NSString *)stimDB_localizedStringForKey:(NSString *)key;
+ (NSString *)stimDB_localizedStringForKey:(NSString *)key value:(NSString *)value;

@end
