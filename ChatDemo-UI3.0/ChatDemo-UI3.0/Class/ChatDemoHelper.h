/************************************************************
 *  * Hyphenate  
 * __________________
 * Copyright (C) 2016 Hyphenate Inc. All rights reserved.
 *
 * NOTICE: All information contained herein is, and remains
 * the property of Hyphenate Inc.
 * Dissemination of this information or reproduction of this material
 * is strictly forbidden unless prior written permission is obtained
 * from Hyphenate Inc.
 */

#import <Foundation/Foundation.h>

#import "ConversationListController.h"
#import "MainViewController.h"
#import "ChatViewController.h"


@interface ChatDemoHelper : NSObject <EMClientDelegate,EMChatManagerDelegate,EMContactManagerDelegate,EMGroupManagerDelegate,EMChatroomManagerDelegate>

@property (nonatomic, weak) ConversationListController *conversationListVC;

@property (nonatomic, weak) MainViewController *mainVC;

@property (nonatomic, weak) ChatViewController *chatVC;

+ (instancetype)shareHelper;

- (void)asyncPushOptions;

- (void)asyncConversationFromDB;

@end
