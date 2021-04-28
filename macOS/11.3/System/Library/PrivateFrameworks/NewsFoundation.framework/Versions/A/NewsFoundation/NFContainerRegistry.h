/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/Versions/A/NewsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFContainerRegistry.h>

@protocol NFContainerRegistry <NSObject>
@property (nonatomic,readonly) id<NFRegistrationContainer> publicContainer; 
@property (nonatomic,readonly) id<NFRegistrationContainer> privateContainer; 
@property (nonatomic,readonly) id swiftContainer; 
@property (nonatomic,readonly) id bridgedContainer; 
@property (nonatomic,readonly) id<NFCallbackRegistration> callback; 
@required
-(id<NFCallbackRegistration>)callback;
-(id<NFRegistrationContainer>)privateContainer;
-(id<NFRegistrationContainer>)publicContainer;
-(id)bridgedContainer;
-(id)swiftContainer;

@end


@protocol NFRegistrationContainer, NFCallbackRegistration;
@class NSString;

@interface NFContainerRegistry : NSObject <NFContainerRegistry> {

	id<NFRegistrationContainer> _publicContainer;
	id<NFRegistrationContainer> _privateContainer;
	id _bridgedContainer;
	id _swiftContainer;
	id<NFCallbackRegistration> _callback;

}

@property (nonatomic,readonly) id<NFRegistrationContainer> publicContainer;               //@synthesize publicContainer=_publicContainer - In the implementation block
@property (nonatomic,readonly) id<NFRegistrationContainer> privateContainer;              //@synthesize privateContainer=_privateContainer - In the implementation block
@property (nonatomic,readonly) id swiftContainer;                                         //@synthesize swiftContainer=_swiftContainer - In the implementation block
@property (nonatomic,readonly) id bridgedContainer;                                       //@synthesize bridgedContainer=_bridgedContainer - In the implementation block
@property (nonatomic,readonly) id<NFCallbackRegistration> callback;                       //@synthesize callback=_callback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NFCallbackRegistration>)callback;
-(id<NFRegistrationContainer>)privateContainer;
-(id<NFRegistrationContainer>)publicContainer;
-(id)bridgedContainer;
-(id)initWithPublicContainer:(id)arg1 privateContainer:(id)arg2 bridgedContainer:(id)arg3 callback:(id)arg4 ;
-(id)swiftContainer;
@end
