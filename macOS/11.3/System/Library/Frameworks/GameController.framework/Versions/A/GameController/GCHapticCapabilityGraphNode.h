/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameController.framework/Versions/A/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GCJSONRepresentable.h>

@class NSString, NSMutableArray;

@interface GCHapticCapabilityGraphNode : NSObject <GCJSONRepresentable> {

	char _exposed;
	NSString* _label;
	NSMutableArray* _children;
	NSMutableArray* _actuators;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableArray * children;                    //@synthesize children=_children - In the implementation block
@property (nonatomic,retain) NSMutableArray * actuators;                   //@synthesize actuators=_actuators - In the implementation block
@property (nonatomic,readonly) NSString * label;                           //@synthesize label=_label - In the implementation block
@property (getter=isExposed,nonatomic,readonly) char exposed;              //@synthesize exposed=_exposed - In the implementation block
-(NSString *)label;
-(void)addChild:(id)arg1 ;
-(NSMutableArray *)children;
-(void)setChildren:(NSMutableArray *)arg1 ;
-(id)initWithJSONDictionaryRepresentation:(id)arg1 ;
-(id)jsonDictionaryRepresentation;
-(char)isExposed;
-(NSMutableArray *)actuators;
-(void)setActuators:(NSMutableArray *)arg1 ;
-(void)addActuator:(id)arg1 ;
@end
