/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/Versions/A/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSMutableArray, FBSDisplayConfiguration, NSDate, NSArray, NSString;

@interface FBSDisplayLayout : NSObject <BSXPCCoding, BSDescriptionProviding> {

	NSMutableArray* _elements;
	FBSDisplayConfiguration* _displayConfiguration;
	long long _interfaceOrientation;
	long long _backlightLevel;
	NSDate* _timestamp;

}

@property (nonatomic,retain) FBSDisplayConfiguration * displayConfiguration;              //@synthesize displayConfiguration=_displayConfiguration - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) long long displayBacklightLevel;                             //@synthesize backlightLevel=_backlightLevel - In the implementation block
@property (nonatomic,copy,readonly) NSArray * elements;                                   //@synthesize elements=_elements - In the implementation block
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) NSDate * timestamp;                                        //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(NSArray *)elements;
-(NSDate *)timestamp;
-(CGRect)bounds;
-(id)display;
-(FBSDisplayConfiguration *)displayConfiguration;
-(id)addElement:(id)arg1 ;
-(long long)displayType;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(long long)interfaceOrientation;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(void)setDisplayConfiguration:(FBSDisplayConfiguration *)arg1 ;
-(CGRect)referenceBounds;
-(id)_initWithElements:(id)arg1 ;
-(long long)displayBacklightLevel;
-(void)_sortElements;
-(void)removeElement:(id)arg1 ;
-(void)finalizeLayout;
-(void)setDisplayBacklightLevel:(long long)arg1 ;
@end

