/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/Versions/A/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NFApplet;

@interface NFDigitalCarKeyEndEvent : NSObject <NSSecureCoding> {

	NSString* _appletIdentifier;
	BOOL _didError;
	unsigned _result;
	NFApplet* _applet;
	NSString* _keyIdentifier;

}

@property (nonatomic,readonly) NFApplet * applet;                     //@synthesize applet=_applet - In the implementation block
@property (nonatomic,readonly) NSString * keyIdentifier;              //@synthesize keyIdentifier=_keyIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL didError;                         //@synthesize didError=_didError - In the implementation block
@property (nonatomic,readonly) unsigned result;                       //@synthesize result=_result - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)result;
-(NSString *)keyIdentifier;
-(id)asDictionary;
-(NFApplet *)applet;
-(BOOL)didError;
-(id)appletIdentifier;
-(void)_setApplet:(id)arg1 ;
-(id)initFromContactlessPaymentEndEvent:(id)arg1 ;
@end

