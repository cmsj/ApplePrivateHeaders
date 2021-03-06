/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/Versions/A/CoreChart
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreChart/CoreChart-Structs.h>
#import <libobjc.A.dylib/CCVegaHTMLElementInterface.h>

@protocol CCVegaHTMLElementInterface;
@class CCVegaCSSStyleDeclaration, NSMutableArray, NSString, NSMutableDictionary, NSObject;

@interface CCVegaHTMLElement : NSObject <CCVegaHTMLElementInterface> {

	CCVegaCSSStyleDeclaration* style;
	NSMutableArray* childNodes;
	NSString* tagName;
	NSMutableDictionary* events;
	NSObject*<CCVegaHTMLElementInterface> parentNode;
	double clientWidth;
	double clientHeight;

}

@property (nonatomic,retain) CCVegaCSSStyleDeclaration * style; 
@property (nonatomic,retain) NSMutableArray * childNodes; 
@property (nonatomic,retain) NSString * tagName; 
@property (nonatomic,retain) NSMutableDictionary * events; 
@property (nonatomic,retain) NSObject*<CCVegaHTMLElementInterface> parentNode; 
@property (assign,nonatomic) double clientWidth; 
@property (assign,nonatomic) double clientHeight; 
-(id)init;
-(CCVegaCSSStyleDeclaration *)style;
-(void)setStyle:(CCVegaCSSStyleDeclaration *)arg1 ;
-(NSObject*<CCVegaHTMLElementInterface>)parentNode;
-(void)setParentNode:(NSObject*<CCVegaHTMLElementInterface>)arg1 ;
-(NSMutableArray *)childNodes;
-(void)setChildNodes:(NSMutableArray *)arg1 ;
-(NSString *)tagName;
-(double)clientWidth;
-(double)clientHeight;
-(NSMutableDictionary *)events;
-(void)setEvents:(NSMutableDictionary *)arg1 ;
-(void)setTagName:(NSString *)arg1 ;
-(id)initWithTagName:(id)arg1 ;
-(void)setClientWidth:(double)arg1 ;
-(void)setClientHeight:(double)arg1 ;
-(void)recursiveSetSize:(CGSize)arg1 ;
-(id)getBoundingClientRect;
-(id)removeWithChild:(id)arg1 ;
-(id)appendWithChild:(id)arg1 ;
-(id)prependWithChild:(id)arg1 ;
-(void)setAttributeWithName:(id)arg1 value:(id)arg2 ;
-(void)addEventListenerWithType:(id)arg1 listener:(id)arg2 ;
-(void)removeEventListenerWithType:(id)arg1 listener:(id)arg2 ;
@end

