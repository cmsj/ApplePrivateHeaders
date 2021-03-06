/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, DDNonTerminal, DDLocation;

@interface DDProduction : NSObject <NSSecureCoding> {

	NSArray* _items;
	DDNonTerminal* _nonTerminal;
	long long _index;
	DDLocation* _location;
	long long* _graphOfWeakNT;
	long long _numberOfDottedProductions;
	_DDDotedProduction* _dottedProductions;

}

@property (assign) long long index;                    //@synthesize index=_index - In the implementation block
@property (retain) DDLocation * location; 
+(char)supportsSecureCoding;
-(id)locationFilename;
-(id)initWithSymbols:(id)arg1 nonTerminal:(id)arg2 ;
-(id)descriptionWithMarkerPos:(int)arg1 ;
-(void)setSymbols:(id)arg1 ;
-(id)nonTerminal;
-(void)recalculateWeakNTGraphAndDottedProdNumber;
-(long long)numberOfWeakNTBeforeIndex:(long long)arg1 ;
-(long long)numberOfDottedProduction;
-(void)setDottedProductions:(_DDDotedProduction*)arg1 ;
-(_DDDotedProduction*)dottedProductions;
-(char)checkDottedProductionIndex:(long long)arg1 ;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)index;
-(void)setIndex:(long long)arg1 ;
-(DDLocation *)location;
-(void)setLocation:(DDLocation *)arg1 ;
-(id)locationDescription;
-(id)symbols;
-(_DDExpressionPosition)locationPosition;
@end

