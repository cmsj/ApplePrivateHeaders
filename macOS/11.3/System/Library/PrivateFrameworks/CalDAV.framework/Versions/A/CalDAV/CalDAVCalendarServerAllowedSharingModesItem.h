/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAllowedSharingModesItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _canBePublished;
	CoreDAVItemWithNoChildren* _canBeShared;
	CoreDAVItemWithNoChildren* _isMarkedUndeletable;
	CoreDAVItemWithNoChildren* _isMarkedImmutableSharees;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * canBePublished;                        //@synthesize canBePublished=_canBePublished - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * canBeShared;                           //@synthesize canBeShared=_canBeShared - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * isMarkedUndeletable;                   //@synthesize isMarkedUndeletable=_isMarkedUndeletable - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * isMarkedImmutableSharees;              //@synthesize isMarkedImmutableSharees=_isMarkedImmutableSharees - In the implementation block
-(id)init;
-(CoreDAVItemWithNoChildren *)canBePublished;
-(CoreDAVItemWithNoChildren *)isMarkedUndeletable;
-(CoreDAVItemWithNoChildren *)isMarkedImmutableSharees;
-(void)setCanBePublished:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)canBeShared;
-(void)setCanBeShared:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setIsMarkedImmutableSharees:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setIsMarkedUndeletable:(CoreDAVItemWithNoChildren *)arg1 ;
-(id)copyParseRules;
@end

