//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSStyle.h"

#import "MSSharedObjectInstance.h"
#import "NSCopying.h"

@class MSStyleBorder, MSStyleFill, MSStyleShadow, MSTextStyle, NSObject<NSCopying><NSCoding>, NSString;

@interface MSStyle : _MSStyle <MSSharedObjectInstance, NSCopying>
{
}

- (id)addStylePartOfType:(unsigned long long)arg1;
- (id)stylePartsOfType:(unsigned long long)arg1;
- (double)thickestInnerStroke;
- (BOOL)hasDecorations;
- (double)thickestStroke;
- (BOOL)hasTextStyle;
- (unsigned long long)type;
- (id)parentStyle;
- (id)parentLayer;
@property(readonly, nonatomic) BOOL hasEnabledBackgroundBlur;
- (BOOL)supportsAdvancedBorderSettings;
- (void)multiplyBy:(double)arg1;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)object:(id)arg1 didChangeProperty:(id)arg2;
- (void)setTextStyle:(id)arg1;
@property(retain, nonatomic) MSTextStyle *primitiveTextStyle;
@property(retain, nonatomic) NSString *primitiveSharedObjectID;
- (void)setNilValueForKey:(id)arg1;
- (BOOL)hasBlending;
- (id)firstEnabledShadow;
- (id)enabledInnerShadows;
- (id)enabledShadows;
- (id)enabledBorders;
- (id)enabledFills;
@property(readonly, nonatomic) BOOL hasEnabledBorder;
@property(readonly, nonatomic) BOOL hasMoreThanOneEnabledFill;
@property(readonly, nonatomic) BOOL hasEnabledFill;
@property(readonly, nonatomic) BOOL hasEnabledShadow;
@property(readonly, nonatomic) __weak MSStyleShadow *innerShadow;
@property(readonly, nonatomic) __weak MSStyleShadow *shadow;
@property(retain, nonatomic) MSStyleBorder *border;
@property(retain, nonatomic) MSStyleFill *fill;
- (long long)determineMaskingMode;
- (void)prepareAsMask;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSObject<NSCopying><NSCoding> *sharedObjectID;
@property(readonly) Class superclass;

@end

