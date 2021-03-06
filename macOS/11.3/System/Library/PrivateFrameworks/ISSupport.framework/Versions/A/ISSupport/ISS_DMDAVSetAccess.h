/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ISSupport.framework/Versions/A/ISSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ISSupport/ISSupport-Structs.h>
#import <ISSupport/ISS_DAVRequest.h>

@class NSDictionary, NSString, ISS_DAVSession;

@interface ISS_DMDAVSetAccess : ISS_DAVRequest {

	NSDictionary* _access;
	NSString* _path;
	ISS_DAVSession* _davSession;

}
+(id)setAccess:(id)arg1 atPath:(id)arg2 withSession:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)dispatch;
-(id)initWithAccess:(id)arg1 path:(id)arg2 session:(id)arg3 ;
-(id)_acesForAccessDict:(id)arg1 forPrincipal:(id)arg2 ;
-(id)_newACLBodyForDictionary:(id)arg1 ;
@end

