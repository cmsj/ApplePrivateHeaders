/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/Versions/A/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNFuture;

@interface CNUICoreContactTypeAssessor : NSObject {

	CNFuture* _familyInfoFuture;

}

@property (nonatomic,readonly) CNFuture * familyInfoFuture;              //@synthesize familyInfoFuture=_familyInfoFuture - In the implementation block
+(id)keysToFetch;
-(id)init;
-(id)initWithFamilyInfoFuture:(id)arg1 ;
-(long long)estiamtedTypeOfContact:(id)arg1 ;
-(id)initWithFamilyInfo:(id)arg1 ;
-(CNFuture *)familyInfoFuture;
@end
