//
//  NSMutableDictionary+STIMSafe.h
//  STChatIphone
//
//  Created by xueping on 15/7/3.
//
//


#import <Foundation/Foundation.h>

@interface NSMutableDictionary (STIMsafe)

- (void)setSTIMSafeObject:(id)anObject forKey:(id<NSCopying>)aKey;

@end
