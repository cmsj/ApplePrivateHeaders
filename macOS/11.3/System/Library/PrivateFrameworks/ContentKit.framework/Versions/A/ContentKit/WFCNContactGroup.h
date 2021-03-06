/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/Versions/A/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFContactGroup.h>

@class CNGroup, NSArray;

@interface WFCNContactGroup : WFContactGroup {

	CNGroup* _group;
	NSArray* _cachedMembers;

}

@property (nonatomic,retain) NSArray * cachedMembers;              //@synthesize cachedMembers=_cachedMembers - In the implementation block
@property (nonatomic,readonly) NSArray * contacts; 
@property (nonatomic,readonly) CNGroup * group;                    //@synthesize group=_group - In the implementation block
+(id)allContactGroups;
+(id)contactGroupWithCNGroup:(id)arg1 ;
-(id)name;
-(CNGroup *)group;
-(NSArray *)contacts;
-(char)containsContact:(id)arg1 ;
-(id)initWithCNGroup:(id)arg1 ;
-(NSArray *)cachedMembers;
-(void)setCachedMembers:(NSArray *)arg1 ;
@end

