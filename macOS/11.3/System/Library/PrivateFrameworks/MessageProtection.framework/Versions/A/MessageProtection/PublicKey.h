/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/Versions/A/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol P256PublicKeyProtocol;
@interface PublicKey : NSObject {

	id<P256PublicKeyProtocol> _key;

}

@property (retain) id<P256PublicKeyProtocol> key;              //@synthesize key=_key - In the implementation block
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)dataRepresentation;
-(id)initWithKey:(id)arg1 ;
-(id<P256PublicKeyProtocol>)key;
-(void)setKey:(id<P256PublicKeyProtocol>)arg1 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
@end

