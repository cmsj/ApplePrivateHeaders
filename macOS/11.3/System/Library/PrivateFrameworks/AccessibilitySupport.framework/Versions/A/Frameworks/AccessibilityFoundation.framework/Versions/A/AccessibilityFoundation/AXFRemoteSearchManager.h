/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityFoundation.framework/Versions/A/AccessibilityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString, AXFUIElement;

@interface AXFRemoteSearchManager : NSObject {

	char __visibleOnly;
	NSArray* __searchKeys;
	NSString* __searchText;
	AXFUIElement* __containerElement;
	AXFUIElement* __nextStartElement;
	AXFUIElement* __previousStartElement;

}

@property (nonatomic,readonly) NSArray * _searchKeys;                                                            //@synthesize _searchKeys=__searchKeys - In the implementation block
@property (nonatomic,copy,readonly) NSString * _searchText;                                                      //@synthesize _searchText=__searchText - In the implementation block
@property (nonatomic,readonly) char _visibleOnly;                                                                //@synthesize _visibleOnly=__visibleOnly - In the implementation block
@property (nonatomic,__weak,readonly) AXFUIElement * _containerElement;                                          //@synthesize _containerElement=__containerElement - In the implementation block
@property (setter=_setNextStartElement:,nonatomic,retain) AXFUIElement * _nextStartElement;                      //@synthesize _nextStartElement=__nextStartElement - In the implementation block
@property (setter=_setPreviousStartElement:,nonatomic,retain) AXFUIElement * _previousStartElement;              //@synthesize _previousStartElement=__previousStartElement - In the implementation block
+(char)elementSupportsSearch:(id)arg1 ;
-(id)_nextResultsWithLimit:(unsigned long long)arg1 ;
-(id)_previousResultsWithLimit:(unsigned long long)arg1 ;
-(id)_nextResult;
-(id)_navigableResultInSearchDirection:(unsigned long long)arg1 ;
-(id)_navigableElementFromElement:(id)arg1 ;
-(id)_resultsWithLimit:(unsigned long long)arg1 inSearchDirection:(unsigned long long)arg2 ;
-(id)_startElementForDirection:(unsigned long long)arg1 ;
-(AXFUIElement *)_previousStartElement;
-(void)_setNextStartElement:(id)arg1 ;
-(void)_setPreviousStartElement:(id)arg1 ;
-(char)shouldIncludElementInNavigableSearch:(id)arg1 startingFromElement:(id)arg2 ;
-(NSString *)_searchText;
-(NSArray *)_searchKeys;
-(id)previousResult;
-(id)_previousResult;
-(id)initWithContainer:(id)arg1 startElement:(id)arg2 searchKeys:(id)arg3 searchText:(id)arg4 visibleOnly:(char)arg5 ;
-(id)nextResult;
-(id)nextResultsWithLimit:(unsigned long long)arg1 ;
-(id)previousResultsWithLimit:(unsigned long long)arg1 ;
-(id)nextNavigableResult;
-(id)previousNavigableResult;
-(AXFUIElement *)_containerElement;
-(void)_updateStartElements:(id)arg1 ;
-(char)_visibleOnly;
-(AXFUIElement *)_nextStartElement;
@end

