/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Versions/A/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/GPBMessage.h>

@class NSData, LogHead;

@interface MapHead : GPBMessage

@property (assign,nonatomic) unsigned long long logBeginningMs; 
@property (nonatomic,copy) NSData * mapHeadHash; 
@property (assign,nonatomic) int application; 
@property (nonatomic,retain) LogHead * changeLogHead; 
@property (assign,nonatomic) char hasChangeLogHead; 
@property (assign,nonatomic) unsigned long long revision; 
@property (assign,nonatomic) int mapType; 
@property (assign,nonatomic) unsigned long long treeId; 
+(id)descriptor;
@end

