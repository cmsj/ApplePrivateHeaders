/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityKit.framework/Versions/A/AccessibilityKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXKElementFilterStrategy, AXKElementTraversalStrategy;
@interface AXKSearchManager : NSObject {

	unsigned long long _searchStyle;
	id<AXKElementFilterStrategy> _elementFilterStrategy;
	id<AXKElementTraversalStrategy> __elementTraversalStrategy;

}

@property (nonatomic,retain) id<AXKElementTraversalStrategy> _elementTraversalStrategy;              //@synthesize _elementTraversalStrategy=__elementTraversalStrategy - In the implementation block
@property (assign,nonatomic) unsigned long long searchStyle;                                         //@synthesize searchStyle=_searchStyle - In the implementation block
@property (nonatomic,readonly) id<AXKElementFilterStrategy> elementFilterStrategy;                   //@synthesize elementFilterStrategy=_elementFilterStrategy - In the implementation block
-(id)_nextElementFromElement:(id)arg1 direction:(unsigned long long)arg2 type:(unsigned long long)arg3 scope:(unsigned long long)arg4 ;
-(id)_ancestorElementFromElement:(id)arg1 type:(unsigned long long)arg2 ;
-(id<AXKElementFilterStrategy>)elementFilterStrategy;
-(id)_searchDecendantFromElement:(id)arg1 direction:(unsigned long long)arg2 type:(unsigned long long)arg3 ;
-(char)isValidElement:(id)arg1 ;
-(id)_resultElementFromElement:(id)arg1 direction:(unsigned long long)arg2 type:(unsigned long long)arg3 scope:(unsigned long long)arg4 ;
-(id)_searchFromElement:(id)arg1 direction:(unsigned long long)arg2 type:(unsigned long long)arg3 ;
-(id)_searchChildrenCandidatesForElement:(id)arg1 ;
-(unsigned long long)searchStyle;
-(id)_deepestDescendantOfElement:(id)arg1 direction:(unsigned long long)arg2 ;
-(char)_meetsCriteriaForSearchType:(unsigned long long)arg1 element:(id)arg2 ;
-(id<AXKElementTraversalStrategy>)_elementTraversalStrategy;
-(id)initWithFilterStrategy:(id)arg1 traversalStrategy:(id)arg2 ;
-(id)nextElementFromElement:(id)arg1 type:(unsigned long long)arg2 scope:(unsigned long long)arg3 ;
-(id)previousElementFromElement:(id)arg1 type:(unsigned long long)arg2 scope:(unsigned long long)arg3 ;
-(id)ancestorElementFromElement:(id)arg1 type:(unsigned long long)arg2 ;
-(id)firstDecendantElementFromElement:(id)arg1 type:(unsigned long long)arg2 ;
-(id)lastDecendantElementFromElement:(id)arg1 type:(unsigned long long)arg2 ;
-(id)_firstDescendantForElement:(id)arg1 type:(unsigned long long)arg2 ;
-(void)setSearchStyle:(unsigned long long)arg1 ;
-(void)set_elementTraversalStrategy:(id<AXKElementTraversalStrategy>)arg1 ;
@end

