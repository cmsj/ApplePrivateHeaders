/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BrowserDataImportingService.h>

@protocol BrowserDataImportingService
@required
-(void)exit;
-(void)createBookmarkImporterWithBrowserDataDirectories:(id)arg1 reply:(/*^block*/id)arg2;
-(void)createHistoryImporterWithBrowserDataDirectories:(id)arg1 reply:(/*^block*/id)arg2;
-(void)createCredentialImporterWithBrowserDataDirectories:(id)arg1 reply:(/*^block*/id)arg2;

@end


@interface BrowserDataImportingService : NSObject <BrowserDataImportingService>
-(void)exit;
-(void)createBookmarkImporterWithBrowserDataDirectories:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)createHistoryImporterWithBrowserDataDirectories:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)createCredentialImporterWithBrowserDataDirectories:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_createImporterWithBrowserDataDirectories:(id)arg1 importEngineClass:(Class)arg2 replyBlock:(/*^block*/id)arg3 ;
@end

