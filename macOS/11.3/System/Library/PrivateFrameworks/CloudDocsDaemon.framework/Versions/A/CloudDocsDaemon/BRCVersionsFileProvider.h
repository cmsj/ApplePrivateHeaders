/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCFileProvider.h>

@class NSMutableDictionary;

@interface BRCVersionsFileProvider : BRCFileProvider {

	NSMutableDictionary* _operationsByName;

}
-(id)_fileReactorID;
-(void)_provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2 ;
-(id)_physicalURLForURL:(id)arg1 ;
-(id)initWithVolume:(id)arg1 ;
-(void)dumpToContext:(id)arg1 ;
@end

