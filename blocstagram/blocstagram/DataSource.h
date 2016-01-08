//
//  DataSource.h
//  blocstagram
//
//  Created by YooJin Hong on 12/6/15.
//  Copyright © 2015 YooJin Hong. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Media;

@interface DataSource : NSObject

typedef void (^NewItemCompletionBlock)(NSError *error);

@property (nonatomic, strong, readonly) NSArray *mediaItems;

+ (instancetype)sharedInstance;

- (void) removeMediaItemsAtIndex:(NSInteger)index;
- (void) deleteMediaItem:(Media *)item;
- (void) requestNewItemsWithCompletionHandler:(NewItemCompletionBlock)completionHandler;
- (void) requestOldItemsWithCompletionHandler:(NewItemCompletionBlock)completionHandler;



@end
