//
//  AppDelegate.h
//  ios-opencv4
//
//  Created by mac on 2020/9/2.
//  Copyright © 2020 TongArk. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentCloudKitContainer *persistentContainer;

- (void)saveContext;


@end

