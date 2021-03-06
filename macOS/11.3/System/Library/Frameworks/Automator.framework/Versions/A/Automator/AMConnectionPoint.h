/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AMActionConnector, NSString, AMAction, NSPredicate, NSDictionary;

@interface AMConnectionPoint : NSObject <NSCopying> {

	AMActionConnector* _connector;
	AMActionConnector* _runtimeConnector;
	NSString* _typeDisplayName;
	NSString* _utiType;
	AMAction* _action;
	NSPredicate* _predicate;
	NSDictionary* _runtimeTypeDictionary;
	char _isInputPoint;

}

@property (retain) AMActionConnector * _runtimeConnector;                       //@synthesize runtimeConnector=_runtimeConnector - In the implementation block
@property (assign,nonatomic,__weak) AMAction * action;                          //@synthesize action=_action - In the implementation block
@property (retain) NSPredicate * predicate;                                     //@synthesize predicate=_predicate - In the implementation block
@property (__weak) AMActionConnector * connector;                               //@synthesize connector=_connector - In the implementation block
@property (nonatomic,retain) NSString * UTIType; 
@property (retain) NSDictionary * runtimeTypeDictionary;                        //@synthesize runtimeTypeDictionary=_runtimeTypeDictionary - In the implementation block
@property (nonatomic,copy) NSString * typeDisplayName;                          //@synthesize typeDisplayName=_typeDisplayName - In the implementation block
@property (nonatomic,retain) AMActionConnector * runtimeConnector; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) NSDictionary * typeDictionary; 
@property (getter=isValid,nonatomic,readonly) char valid; 
+(id)inputConnectionPointWithAction:(id)arg1 ;
+(id)outputConnectionPointWithAction:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(char)isValid;
-(AMAction *)action;
-(NSString *)UUID;
-(void)setAction:(AMAction *)arg1 ;
-(NSPredicate *)predicate;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSString *)UTIType;
-(void)setUTIType:(NSString *)arg1 ;
-(void)resetToDefault;
-(void)generateUTITypes;
-(void)resetToDefaultOnMainThread;
-(AMActionConnector *)connector;
-(NSDictionary *)typeDictionary;
-(void)setRuntimeTypeDictionary:(NSDictionary *)arg1 ;
-(void)setRuntimeConnector:(AMActionConnector *)arg1 ;
-(AMActionConnector *)runtimeConnector;
-(void)setConnector:(AMActionConnector *)arg1 ;
-(id)initWithAction:(id)arg1 isInput:(char)arg2 ;
-(NSString *)typeDisplayName;
-(void)setTypeDisplayName:(NSString *)arg1 ;
-(NSDictionary *)runtimeTypeDictionary;
-(AMActionConnector *)_runtimeConnector;
-(void)set_runtimeConnector:(AMActionConnector *)arg1 ;
@end

