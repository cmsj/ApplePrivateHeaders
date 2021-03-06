/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUGLObject.h>

@class NSMutableDictionary;

@interface NUGLFramebuffer : NUGLObject {

	NSMutableDictionary* _attachments;

}
-(id)init;
-(void)delete;
-(void)removeAllAttachments;
-(void)generate:(id)arg1 ;
-(void)read:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)write:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)attach:(id)arg1 to:(unsigned)arg2 ;
-(void)detach:(id)arg1 from:(unsigned)arg2 ;
-(void)useWithTarget:(unsigned)arg1 context:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)bind:(unsigned)arg1 context:(id)arg2 ;
-(void)unbind:(unsigned)arg1 context:(id)arg2 ;
@end

