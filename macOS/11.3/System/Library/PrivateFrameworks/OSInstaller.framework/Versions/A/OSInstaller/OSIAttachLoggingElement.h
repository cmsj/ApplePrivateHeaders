/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OSInstaller.framework/Versions/A/OSInstaller
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OSInstaller/OSIInstallQueueElement.h>

@interface OSIAttachLoggingElement : OSIInstallQueueElement
+(void)markDetached;
+(char)flushCurrentInstallLogToMutableProduct;
-(id)operationName;
-(char)runReturningError:(id*)arg1 ;
-(double)estimatedTimeToComplete;
-(char)_attachLog;
@end

