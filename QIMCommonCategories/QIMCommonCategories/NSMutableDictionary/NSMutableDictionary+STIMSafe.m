//
//  NSMutableDictionary+Safe.m
//  qunarChatIphone
//
//  Created by xueping on 15/7/3.
//
//

#import "NSMutableDictionary+STIMSafe.h"

@implementation NSMutableDictionary (STIMSafe)
-(void)setSTIMSafeObject:(id)anObject forKey:(id<NSCopying>)aKey{
    if (anObject && aKey && self) { 
        [self setObject:anObject forKey:aKey];
    } else {
//        STIMDebugLog(@"");
    }
}
@end
