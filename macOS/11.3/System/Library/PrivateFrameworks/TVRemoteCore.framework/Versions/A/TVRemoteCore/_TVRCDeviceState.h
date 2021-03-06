/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/Versions/A/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSSet, _TVRCKeyboardState, NSError;

@interface _TVRCDeviceState : NSObject <NSSecureCoding> {

	char _supportsTouchEvents;
	char _paired;
	long long _connectionState;
	unsigned long long _pairingCapability;
	long long _connectionType;
	NSString* _name;
	NSString* _identifier;
	NSDictionary* _alternateIdentifiers;
	NSString* _model;
	NSSet* _supportedButtons;
	_TVRCKeyboardState* _keyboardState;
	long long _disconnectReason;
	NSError* _disconnectError;

}

@property (assign,nonatomic) long long connectionState;                         //@synthesize connectionState=_connectionState - In the implementation block
@property (assign,nonatomic) unsigned long long pairingCapability;              //@synthesize pairingCapability=_pairingCapability - In the implementation block
@property (assign,nonatomic) long long connectionType;                          //@synthesize connectionType=_connectionType - In the implementation block
@property (assign,nonatomic) char supportsTouchEvents;                          //@synthesize supportsTouchEvents=_supportsTouchEvents - In the implementation block
@property (assign,getter=isPaired,nonatomic) char paired;                       //@synthesize paired=_paired - In the implementation block
@property (nonatomic,copy) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDictionary * alternateIdentifiers;                 //@synthesize alternateIdentifiers=_alternateIdentifiers - In the implementation block
@property (nonatomic,copy) NSString * model;                                    //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSSet * supportedButtons;                            //@synthesize supportedButtons=_supportedButtons - In the implementation block
@property (nonatomic,copy) _TVRCKeyboardState * keyboardState;                  //@synthesize keyboardState=_keyboardState - In the implementation block
@property (assign,nonatomic) long long disconnectReason;                        //@synthesize disconnectReason=_disconnectReason - In the implementation block
@property (nonatomic,copy) NSError * disconnectError;                           //@synthesize disconnectError=_disconnectError - In the implementation block
+(char)supportsSecureCoding;
+(id)deviceStateFromDevice:(id)arg1 ;
+(id)setOfStatesFromDevices:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(long long)connectionType;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)connectionState;
-(void)setConnectionState:(long long)arg1 ;
-(NSString *)model;
-(void)setModel:(NSString *)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(long long)disconnectReason;
-(void)setDisconnectReason:(long long)arg1 ;
-(void)setPaired:(char)arg1 ;
-(void)setConnectionType:(long long)arg1 ;
-(char)isPaired;
-(_TVRCKeyboardState *)keyboardState;
-(void)setKeyboardState:(_TVRCKeyboardState *)arg1 ;
-(char)supportsTouchEvents;
-(NSDictionary *)alternateIdentifiers;
-(NSSet *)supportedButtons;
-(unsigned long long)pairingCapability;
-(void)setPairingCapability:(unsigned long long)arg1 ;
-(void)setSupportsTouchEvents:(char)arg1 ;
-(void)setAlternateIdentifiers:(NSDictionary *)arg1 ;
-(void)setSupportedButtons:(NSSet *)arg1 ;
-(NSError *)disconnectError;
-(void)setDisconnectError:(NSError *)arg1 ;
@end

