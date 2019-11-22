//
//  NSArray+Safe.m
//  NSArrayTest
//
//  Created by 蓝布鲁 on 2017/11/28.
//  Copyright © 2017年 蓝布鲁. All rights reserved.
//

#import "NSArray+STIMSafe.h"
#import "Swzzling.h"

@implementation NSArray (STIMSafe)
+ (void)load{
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        swizzling_exchangeMethod(objc_getClass("__NSArray0"), @selector(objectAtIndex:), @selector(stimDB_emptyArray_objectAtIndex:));
        swizzling_exchangeMethod(objc_getClass("__NSArrayI"), @selector(objectAtIndex:), @selector(stimDB_arrayI_objectAtIndex:));
        swizzling_exchangeMethod(objc_getClass("__NSArrayM"), @selector(objectAtIndex:), @selector(stimDB_arrayM_objectAtIndex:));
        swizzling_exchangeMethod(objc_getClass("__NSSingleObjectArrayI"), @selector(objectAtIndex:), @selector(stimDB_singleObjectArrayI_objectAtIndex:));
        
        swizzling_exchangeMethod(objc_getClass("__NSArray0"), @selector(objectAtIndexedSubscript:), @selector(stimDB_emptyArray_objectAtIndexedSubscript:));
        swizzling_exchangeMethod(objc_getClass("__NSArrayI"), @selector(objectAtIndexedSubscript:), @selector(stimDB_arrayI_objectAtIndexedSubscript:));
        swizzling_exchangeMethod(objc_getClass("__NSArrayM"), @selector(objectAtIndexedSubscript:), @selector(stimDB_arrayM_objectAtIndexedSubscript:));
        swizzling_exchangeMethod(objc_getClass("__NSSingleObjectArrayI"), @selector(objectAtIndex:), @selector(stimDB_singleObjectArrayI_objectAtIndexedSubscript:));
        
        
    });
}

#pragma MARK -  - (id)objectAtIndex:
- (id)stimDB_emptyArray_objectAtIndex:(NSUInteger)index{
    return nil;
}

- (id)stimDB_arrayI_objectAtIndex:(NSUInteger)index{
    if(index < self.count){
        return [self stimDB_arrayI_objectAtIndex:index];
    }
    return nil;
}

- (id)stimDB_arrayM_objectAtIndex:(NSUInteger)index{
    if(index < self.count){
        return [self stimDB_arrayM_objectAtIndex:index];
    }
    return nil;
}

- (id)stimDB_singleObjectArrayI_objectAtIndex:(NSUInteger)index{
    if(index < self.count){
        return [self stimDB_singleObjectArrayI_objectAtIndex:index];
    }
    return nil;
}

#pragma MARK -  - (id)objectAtIndexedSubscript:
- (id)stimDB_emptyArray_objectAtIndexedSubscript:(NSUInteger)index{
    return nil;
}

- (id)stimDB_arrayI_objectAtIndexedSubscript:(NSUInteger)index{
    if(index < self.count){
        return [self stimDB_arrayI_objectAtIndex:index];
    }
    return nil;
}

- (id)stimDB_arrayM_objectAtIndexedSubscript:(NSUInteger)index{
    if(index < self.count){
        return [self stimDB_arrayM_objectAtIndex:index];
    }
    return nil;
}

- (id)stimDB_singleObjectArrayI_objectAtIndexedSubscript:(NSUInteger)index{
    if(index < self.count){
        return [self stimDB_singleObjectArrayI_objectAtIndexedSubscript:index];
    }
    return nil;
}

@end
