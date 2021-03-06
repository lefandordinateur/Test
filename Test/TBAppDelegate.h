//
//  TBAppDelegate.h
//  Test
//
//  Created by jessy giacomoni on 25/04/13.
//  Copyright (c) 2013 jessy giacomoni. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TBAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
