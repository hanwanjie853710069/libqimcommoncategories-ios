//
//  NSData+QCKCompress.h
//  CommonKit
//
//  Created by 姜琢 on 7/4/19.
//  Copyright © 2019 Qunar.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSData (QCKCompress)

/*! Returns a data object containing a Zlib compressed copy of the receivers contents.
 * \returns A data object containing a Zlib compressed copy of the receivers contents.
 */
- (NSData *) qck_zlibcompress;

/*! Returns a data object containing a Zlib decompressed copy of the receivers contents.
 * \returns A data object containing a Zlib decompressed copy of the receivers contents.
 */
- (NSData *) qck_zlibdecompress;

@end
NS_ASSUME_NONNULL_END
