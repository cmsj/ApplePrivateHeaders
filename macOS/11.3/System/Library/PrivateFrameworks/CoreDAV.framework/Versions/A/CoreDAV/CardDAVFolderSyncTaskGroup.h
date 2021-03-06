/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVContainerSyncTaskGroup.h>

@interface CardDAVFolderSyncTaskGroup : CoreDAVContainerSyncTaskGroup {

	char _isInitialSync;

}

@property (assign,nonatomic) char isInitialSync;              //@synthesize isInitialSync=_isInitialSync - In the implementation block
-(id)copyGetTaskWithURL:(id)arg1 ;
-(id)dataContentType;
-(id)copyMultiGetTaskWithURLs:(id)arg1 ;
-(char)isInitialSync;
-(Class)bulkChangeTaskClass;
-(id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 syncItemOrder:(char)arg5 context:(id)arg6 accountInfoProvider:(id)arg7 taskManager:(id)arg8 appSpecificDataItemClass:(Class)arg9 ;
-(id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 context:(id)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7 appSpecificDataItemClass:(Class)arg8 ;
-(void)setIsInitialSync:(char)arg1 ;
@end

