/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/Versions/A/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CSXPCConnection.h>

@interface CSImporter : CSXPCConnection
+(id)sharedImporterForUser:(unsigned)arg1 ;
-(void)_importFilesForBundleId:(id)arg1 data:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_UTITypesByBundleID:(/*^block*/id)arg1 ;
@end

