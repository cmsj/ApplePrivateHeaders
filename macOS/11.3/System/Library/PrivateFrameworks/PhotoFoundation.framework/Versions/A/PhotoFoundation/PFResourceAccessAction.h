/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/Versions/A/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PFAction.h>
#import <libobjc.A.dylib/PFResourceAccessClient.h>

@class NSString;

@interface PFResourceAccessAction : PFAction <PFResourceAccessClient>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)executeUndo;
-(int)executeRedo;
-(void)resourceWillShutdown:(id)arg1 ;
-(int)executeAction;
-(int)executeAction:(/*^block*/id)arg1 ;
-(int)executeUndo:(/*^block*/id)arg1 ;
-(int)executeRedo:(/*^block*/id)arg1 ;
-(id)resourceObject;
-(char)beginResourceAccess;
-(void)endResourceAccess;
@end

