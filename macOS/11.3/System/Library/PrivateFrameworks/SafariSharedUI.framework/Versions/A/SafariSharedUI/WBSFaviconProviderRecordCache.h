/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariSharedUI/SafariSharedUI-Structs.h>
@class NSMutableDictionary;

@interface WBSFaviconProviderRecordCache : NSObject {

	NSMutableDictionary* _iconURLStringToInfoDictionary;
	NSMutableDictionary* _iconUUIDToURLStringDictionary;

}
-(id)init;
-(void)removeAllRecords;
-(void)removeRecordForIconUUIDs:(id)arg1 ;
-(void)setDateAdded:(id)arg1 forFaviconURLString:(id)arg2 iconUUID:(id)arg3 iconSize:(CGSize)arg4 hasGeneratedResolutions:(char)arg5 ;
-(id)iconInfoForURLString:(id)arg1 ;
-(id)dateAddedForFaviconURLString:(id)arg1 iconUUID:(id*)arg2 size:(CGSize*)arg3 ;
@end

