/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/Versions/A/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TRIPBMessage.h>

@class TRIPBInt32Array, NSString, NSMutableArray;

@interface TRIPBSourceCodeInfo_Location : TRIPBMessage

@property (nonatomic,retain) TRIPBInt32Array * pathArray; 
@property (nonatomic,readonly) unsigned long long pathArray_Count; 
@property (nonatomic,retain) TRIPBInt32Array * spanArray; 
@property (nonatomic,readonly) unsigned long long spanArray_Count; 
@property (nonatomic,copy) NSString * leadingComments; 
@property (assign,nonatomic) char hasLeadingComments; 
@property (nonatomic,copy) NSString * trailingComments; 
@property (assign,nonatomic) char hasTrailingComments; 
@property (nonatomic,retain) NSMutableArray * leadingDetachedCommentsArray; 
@property (nonatomic,readonly) unsigned long long leadingDetachedCommentsArray_Count; 
+(id)descriptor;
@end

