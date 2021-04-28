/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@interface _NSWorkspaceAuthorizationData : NSObject {

	SCD_Struct_NS115 _authExt;
	AuthorizationOpaqueRefRef _auth;
	long long _type;

}

@property (readonly) SCD_Struct_NS115 authExt;                    //@synthesize authExt=_authExt - In the implementation block
@property (readonly) AuthorizationOpaqueRefRef auth;              //@synthesize auth=_auth - In the implementation block
@property (readonly) long long type;                              //@synthesize type=_type - In the implementation block
-(void)dealloc;
-(long long)type;
-(id)initWithAuth:(AuthorizationOpaqueRefRef)arg1 externalForm:(SCD_Struct_NS115)arg2 type:(long long)arg3 ;
-(SCD_Struct_NS115)authExt;
-(AuthorizationOpaqueRefRef)auth;
@end
