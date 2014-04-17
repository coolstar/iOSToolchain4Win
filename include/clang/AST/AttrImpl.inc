/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*Attribute classes' member function definitions                              *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

ARMInterruptAttr *ARMInterruptAttr::clone(ASTContext &C) const {
  return new (C) ARMInterruptAttr(getLocation(), C, interrupt, getSpellingListIndex());
}

void ARMInterruptAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((interrupt(" << getInterrupt() << ")))";
    break;
  }
}
}

const char *ARMInterruptAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "interrupt";
  }
}

AcquireCapabilityAttr *AcquireCapabilityAttr::clone(ASTContext &C) const {
  return new (C) AcquireCapabilityAttr(getLocation(), C, args, argsSize, getSpellingListIndex());
}

void AcquireCapabilityAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((acquire_capability(";
  bool isFirst = true;
  for (AcquireCapabilityAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")))";
    break;
  }
  case 1 : {
    OS << " [[clang::acquire_capability(";
  bool isFirst = true;
  for (AcquireCapabilityAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")]]";
    break;
  }
  case 2 : {
    OS << " __attribute__((acquire_shared_capability(";
  bool isFirst = true;
  for (AcquireCapabilityAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")))";
    break;
  }
  case 3 : {
    OS << " [[clang::acquire_shared_capability(";
  bool isFirst = true;
  for (AcquireCapabilityAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")]]";
    break;
  }
  case 4 : {
    OS << " __attribute__((exclusive_lock_function(";
  bool isFirst = true;
  for (AcquireCapabilityAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")))";
    break;
  }
  case 5 : {
    OS << " __attribute__((shared_lock_function(";
  bool isFirst = true;
  for (AcquireCapabilityAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")))";
    break;
  }
}
}

const char *AcquireCapabilityAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "acquire_capability";
  case 1:
    return "acquire_capability";
  case 2:
    return "acquire_shared_capability";
  case 3:
    return "acquire_shared_capability";
  case 4:
    return "exclusive_lock_function";
  case 5:
    return "shared_lock_function";
  }
}

AcquiredAfterAttr *AcquiredAfterAttr::clone(ASTContext &C) const {
  return new (C) AcquiredAfterAttr(getLocation(), C, args, argsSize, getSpellingListIndex());
}

void AcquiredAfterAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((acquired_after(";
  bool isFirst = true;
  for (AcquiredAfterAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")))";
    break;
  }
}
}

const char *AcquiredAfterAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "acquired_after";
  }
}

AcquiredBeforeAttr *AcquiredBeforeAttr::clone(ASTContext &C) const {
  return new (C) AcquiredBeforeAttr(getLocation(), C, args, argsSize, getSpellingListIndex());
}

void AcquiredBeforeAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((acquired_before(";
  bool isFirst = true;
  for (AcquiredBeforeAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")))";
    break;
  }
}
}

const char *AcquiredBeforeAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "acquired_before";
  }
}

AliasAttr *AliasAttr::clone(ASTContext &C) const {
  return new (C) AliasAttr(getLocation(), C, getAliasee(), getSpellingListIndex());
}

void AliasAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((alias(\"" << getAliasee() << "\")))";
    break;
  }
  case 1 : {
    OS << " [[gnu::alias(\"" << getAliasee() << "\")]]";
    break;
  }
}
}

const char *AliasAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "alias";
  case 1:
    return "alias";
  }
}

AlignMac68kAttr *AlignMac68kAttr::clone(ASTContext &C) const {
  return new (C) AlignMac68kAttr(getLocation(), C, getSpellingListIndex());
}

void AlignMac68kAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
}

const char *AlignMac68kAttr::getSpelling() const {
  return "(No spelling)";
}

bool AlignedAttr::isAlignmentDependent() const {
  if (isalignmentExpr)
    return alignmentExpr && (alignmentExpr->isValueDependent() || alignmentExpr->isTypeDependent());
  else
    return alignmentType->getType()->isDependentType();
}
unsigned AlignedAttr::getAlignment(ASTContext &Ctx) const {
  assert(!isAlignmentDependent());
  if (isalignmentExpr)
    return (alignmentExpr ? alignmentExpr->EvaluateKnownConstInt(Ctx).getZExtValue() : 16)* Ctx.getCharWidth();
  else
    return 0; // FIXME
}
AlignedAttr *AlignedAttr::clone(ASTContext &C) const {
  return new (C) AlignedAttr(getLocation(), C, isalignmentExpr, isalignmentExpr ? static_cast<void*>(alignmentExpr) : alignmentType, getSpellingListIndex());
}

void AlignedAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((aligned(";
  alignmentExpr->printPretty(OS, 0, Policy);
  OS << ")))";
    break;
  }
  case 1 : {
    OS << " [[gnu::aligned(";
  alignmentExpr->printPretty(OS, 0, Policy);
  OS << ")]]";
    break;
  }
  case 2 : {
    OS << " __declspec(align(";
  alignmentExpr->printPretty(OS, 0, Policy);
  OS << "))";
    break;
  }
  case 3 : {
    OS << " alignas(";
  alignmentExpr->printPretty(OS, 0, Policy);
  OS << ")";
    break;
  }
  case 4 : {
    OS << " _Alignas(";
  alignmentExpr->printPretty(OS, 0, Policy);
  OS << ")";
    break;
  }
}
}

const char *AlignedAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "aligned";
  case 1:
    return "aligned";
  case 2:
    return "align";
  case 3:
    return "alignas";
  case 4:
    return "_Alignas";
  }
}

AlwaysInlineAttr *AlwaysInlineAttr::clone(ASTContext &C) const {
  return new (C) AlwaysInlineAttr(getLocation(), C, getSpellingListIndex());
}

void AlwaysInlineAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((always_inline))";
    break;
  }
  case 1 : {
    OS << " [[gnu::always_inline]]";
    break;
  }
  case 2 : {
    OS << " __forceinline";
    break;
  }
}
}

const char *AlwaysInlineAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "always_inline";
  case 1:
    return "always_inline";
  case 2:
    return "__forceinline";
  }
}

AnalyzerNoReturnAttr *AnalyzerNoReturnAttr::clone(ASTContext &C) const {
  return new (C) AnalyzerNoReturnAttr(getLocation(), C, getSpellingListIndex());
}

void AnalyzerNoReturnAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((analyzer_noreturn))";
    break;
  }
}
}

const char *AnalyzerNoReturnAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "analyzer_noreturn";
  }
}

AnnotateAttr *AnnotateAttr::clone(ASTContext &C) const {
  return new (C) AnnotateAttr(getLocation(), C, getAnnotation(), getSpellingListIndex());
}

void AnnotateAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((annotate(\"" << getAnnotation() << "\")))";
    break;
  }
}
}

const char *AnnotateAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "annotate";
  }
}

ArcWeakrefUnavailableAttr *ArcWeakrefUnavailableAttr::clone(ASTContext &C) const {
  return new (C) ArcWeakrefUnavailableAttr(getLocation(), C, getSpellingListIndex());
}

void ArcWeakrefUnavailableAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((objc_arc_weak_reference_unavailable))";
    break;
  }
}
}

const char *ArcWeakrefUnavailableAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "objc_arc_weak_reference_unavailable";
  }
}

ArgumentWithTypeTagAttr *ArgumentWithTypeTagAttr::clone(ASTContext &C) const {
  return new (C) ArgumentWithTypeTagAttr(getLocation(), C, argumentKind, argumentIdx, typeTagIdx, isPointer, getSpellingListIndex());
}

void ArgumentWithTypeTagAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((argument_with_type_tag(" << getArgumentKind()->getName() << ", " << getArgumentIdx() << ", " << getTypeTagIdx() << ", " << getIsPointer() << ")))";
    break;
  }
  case 1 : {
    OS << " __attribute__((pointer_with_type_tag(" << getArgumentKind()->getName() << ", " << getArgumentIdx() << ", " << getTypeTagIdx() << ", " << getIsPointer() << ")))";
    break;
  }
}
}

const char *ArgumentWithTypeTagAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "argument_with_type_tag";
  case 1:
    return "pointer_with_type_tag";
  }
}

AsmLabelAttr *AsmLabelAttr::clone(ASTContext &C) const {
  return new (C) AsmLabelAttr(getLocation(), C, getLabel(), getSpellingListIndex());
}

void AsmLabelAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " asm(\"" << getLabel() << "\")";
    break;
  }
  case 1 : {
    OS << " __asm__(\"" << getLabel() << "\")";
    break;
  }
}
}

const char *AsmLabelAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "asm";
  case 1:
    return "__asm__";
  }
}

AssertCapabilityAttr *AssertCapabilityAttr::clone(ASTContext &C) const {
  return new (C) AssertCapabilityAttr(getLocation(), C, expr, getSpellingListIndex());
}

void AssertCapabilityAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((assert_capability(" << getExpr() << ")))";
    break;
  }
  case 1 : {
    OS << " [[clang::assert_capability(" << getExpr() << ")]]";
    break;
  }
  case 2 : {
    OS << " __attribute__((assert_shared_capability(" << getExpr() << ")))";
    break;
  }
  case 3 : {
    OS << " [[clang::assert_shared_capability(" << getExpr() << ")]]";
    break;
  }
}
}

const char *AssertCapabilityAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "assert_capability";
  case 1:
    return "assert_capability";
  case 2:
    return "assert_shared_capability";
  case 3:
    return "assert_shared_capability";
  }
}

AssertExclusiveLockAttr *AssertExclusiveLockAttr::clone(ASTContext &C) const {
  return new (C) AssertExclusiveLockAttr(getLocation(), C, args, argsSize, getSpellingListIndex());
}

void AssertExclusiveLockAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((assert_exclusive_lock(";
  bool isFirst = true;
  for (AssertExclusiveLockAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")))";
    break;
  }
}
}

const char *AssertExclusiveLockAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "assert_exclusive_lock";
  }
}

AssertSharedLockAttr *AssertSharedLockAttr::clone(ASTContext &C) const {
  return new (C) AssertSharedLockAttr(getLocation(), C, args, argsSize, getSpellingListIndex());
}

void AssertSharedLockAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((assert_shared_lock(";
  bool isFirst = true;
  for (AssertSharedLockAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")))";
    break;
  }
}
}

const char *AssertSharedLockAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "assert_shared_lock";
  }
}

AvailabilityAttr *AvailabilityAttr::clone(ASTContext &C) const {
  return new (C) AvailabilityAttr(getLocation(), C, platform, getIntroduced(), getDeprecated(), getObsoleted(), unavailable, getMessage(), getSpellingListIndex());
}

void AvailabilityAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((availability(" << getPlatform()->getName();
  if (!getIntroduced().empty()) OS << ", introduced=" << getIntroduced();
  if (!getDeprecated().empty()) OS << ", deprecated=" << getDeprecated();
  if (!getObsoleted().empty()) OS << ", obsoleted=" << getObsoleted();
  if (getUnavailable()) OS << ", unavailable";
  OS << ")))";
    break;
  }
}
}

const char *AvailabilityAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "availability";
  }
}

BlocksAttr *BlocksAttr::clone(ASTContext &C) const {
  return new (C) BlocksAttr(getLocation(), C, type, getSpellingListIndex());
}

void BlocksAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((blocks(" << getType() << ")))";
    break;
  }
}
}

const char *BlocksAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "blocks";
  }
}

C11NoReturnAttr *C11NoReturnAttr::clone(ASTContext &C) const {
  return new (C) C11NoReturnAttr(getLocation(), C, getSpellingListIndex());
}

void C11NoReturnAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " _Noreturn";
    break;
  }
}
}

const char *C11NoReturnAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "_Noreturn";
  }
}

CDeclAttr *CDeclAttr::clone(ASTContext &C) const {
  return new (C) CDeclAttr(getLocation(), C, getSpellingListIndex());
}

void CDeclAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((cdecl))";
    break;
  }
  case 1 : {
    OS << " [[gnu::cdecl]]";
    break;
  }
  case 2 : {
    OS << " __cdecl";
    break;
  }
  case 3 : {
    OS << " _cdecl";
    break;
  }
}
}

const char *CDeclAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "cdecl";
  case 1:
    return "cdecl";
  case 2:
    return "__cdecl";
  case 3:
    return "_cdecl";
  }
}

CFAuditedTransferAttr *CFAuditedTransferAttr::clone(ASTContext &C) const {
  return new (C) CFAuditedTransferAttr(getLocation(), C, getSpellingListIndex());
}

void CFAuditedTransferAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((cf_audited_transfer))";
    break;
  }
}
}

const char *CFAuditedTransferAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "cf_audited_transfer";
  }
}

CFConsumedAttr *CFConsumedAttr::clone(ASTContext &C) const {
  return new (C) CFConsumedAttr(getLocation(), C, getSpellingListIndex());
}

void CFConsumedAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((cf_consumed))";
    break;
  }
}
}

const char *CFConsumedAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "cf_consumed";
  }
}

CFReturnsNotRetainedAttr *CFReturnsNotRetainedAttr::clone(ASTContext &C) const {
  return new (C) CFReturnsNotRetainedAttr(getLocation(), C, getSpellingListIndex());
}

void CFReturnsNotRetainedAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((cf_returns_not_retained))";
    break;
  }
}
}

const char *CFReturnsNotRetainedAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "cf_returns_not_retained";
  }
}

CFReturnsRetainedAttr *CFReturnsRetainedAttr::clone(ASTContext &C) const {
  return new (C) CFReturnsRetainedAttr(getLocation(), C, getSpellingListIndex());
}

void CFReturnsRetainedAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((cf_returns_retained))";
    break;
  }
}
}

const char *CFReturnsRetainedAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "cf_returns_retained";
  }
}

CFUnknownTransferAttr *CFUnknownTransferAttr::clone(ASTContext &C) const {
  return new (C) CFUnknownTransferAttr(getLocation(), C, getSpellingListIndex());
}

void CFUnknownTransferAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((cf_unknown_transfer))";
    break;
  }
}
}

const char *CFUnknownTransferAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "cf_unknown_transfer";
  }
}

CUDAConstantAttr *CUDAConstantAttr::clone(ASTContext &C) const {
  return new (C) CUDAConstantAttr(getLocation(), C, getSpellingListIndex());
}

void CUDAConstantAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((constant))";
    break;
  }
}
}

const char *CUDAConstantAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "constant";
  }
}

CUDADeviceAttr *CUDADeviceAttr::clone(ASTContext &C) const {
  return new (C) CUDADeviceAttr(getLocation(), C, getSpellingListIndex());
}

void CUDADeviceAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((device))";
    break;
  }
}
}

const char *CUDADeviceAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "device";
  }
}

CUDAGlobalAttr *CUDAGlobalAttr::clone(ASTContext &C) const {
  return new (C) CUDAGlobalAttr(getLocation(), C, getSpellingListIndex());
}

void CUDAGlobalAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((global))";
    break;
  }
}
}

const char *CUDAGlobalAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "global";
  }
}

CUDAHostAttr *CUDAHostAttr::clone(ASTContext &C) const {
  return new (C) CUDAHostAttr(getLocation(), C, getSpellingListIndex());
}

void CUDAHostAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((host))";
    break;
  }
}
}

const char *CUDAHostAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "host";
  }
}

CUDALaunchBoundsAttr *CUDALaunchBoundsAttr::clone(ASTContext &C) const {
  return new (C) CUDALaunchBoundsAttr(getLocation(), C, maxThreads, minBlocks, getSpellingListIndex());
}

void CUDALaunchBoundsAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((launch_bounds(" << getMaxThreads() << ", " << getMinBlocks() << ")))";
    break;
  }
}
}

const char *CUDALaunchBoundsAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "launch_bounds";
  }
}

CUDASharedAttr *CUDASharedAttr::clone(ASTContext &C) const {
  return new (C) CUDASharedAttr(getLocation(), C, getSpellingListIndex());
}

void CUDASharedAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((shared))";
    break;
  }
}
}

const char *CUDASharedAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "shared";
  }
}

CXX11NoReturnAttr *CXX11NoReturnAttr::clone(ASTContext &C) const {
  return new (C) CXX11NoReturnAttr(getLocation(), C, getSpellingListIndex());
}

void CXX11NoReturnAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " [[noreturn]]";
    break;
  }
}
}

const char *CXX11NoReturnAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "noreturn";
  }
}

CallableWhenAttr *CallableWhenAttr::clone(ASTContext &C) const {
  return new (C) CallableWhenAttr(getLocation(), C, callableState, callableStateSize, getSpellingListIndex());
}

void CallableWhenAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((callable_when(";
  bool isFirst = true;
  for (CallableWhenAttr::callableState_iterator i = callableState_begin(), e = callableState_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")))";
    break;
  }
}
}

const char *CallableWhenAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "callable_when";
  }
}

CapabilityAttr *CapabilityAttr::clone(ASTContext &C) const {
  return new (C) CapabilityAttr(getLocation(), C, getName(), getSpellingListIndex());
}

void CapabilityAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((capability(\"" << getName() << "\")))";
    break;
  }
  case 1 : {
    OS << " [[clang::capability(\"" << getName() << "\")]]";
    break;
  }
  case 2 : {
    OS << " __attribute__((shared_capability(\"" << getName() << "\")))";
    break;
  }
  case 3 : {
    OS << " [[clang::shared_capability(\"" << getName() << "\")]]";
    break;
  }
}
}

const char *CapabilityAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "capability";
  case 1:
    return "capability";
  case 2:
    return "shared_capability";
  case 3:
    return "shared_capability";
  }
}

CarriesDependencyAttr *CarriesDependencyAttr::clone(ASTContext &C) const {
  return new (C) CarriesDependencyAttr(getLocation(), C, getSpellingListIndex());
}

void CarriesDependencyAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((carries_dependency))";
    break;
  }
  case 1 : {
    OS << " [[carries_dependency]]";
    break;
  }
}
}

const char *CarriesDependencyAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "carries_dependency";
  case 1:
    return "carries_dependency";
  }
}

CleanupAttr *CleanupAttr::clone(ASTContext &C) const {
  return new (C) CleanupAttr(getLocation(), C, functionDecl, getSpellingListIndex());
}

void CleanupAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((cleanup(" << getFunctionDecl()->getNameInfo().getAsString() << ")))";
    break;
  }
  case 1 : {
    OS << " [[gnu::cleanup(" << getFunctionDecl()->getNameInfo().getAsString() << ")]]";
    break;
  }
}
}

const char *CleanupAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "cleanup";
  case 1:
    return "cleanup";
  }
}

ColdAttr *ColdAttr::clone(ASTContext &C) const {
  return new (C) ColdAttr(getLocation(), C, getSpellingListIndex());
}

void ColdAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((cold))";
    break;
  }
  case 1 : {
    OS << " [[gnu::cold]]";
    break;
  }
}
}

const char *ColdAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "cold";
  case 1:
    return "cold";
  }
}

CommonAttr *CommonAttr::clone(ASTContext &C) const {
  return new (C) CommonAttr(getLocation(), C, getSpellingListIndex());
}

void CommonAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((common))";
    break;
  }
  case 1 : {
    OS << " [[gnu::common]]";
    break;
  }
}
}

const char *CommonAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "common";
  case 1:
    return "common";
  }
}

ConstAttr *ConstAttr::clone(ASTContext &C) const {
  return new (C) ConstAttr(getLocation(), C, getSpellingListIndex());
}

void ConstAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((const))";
    break;
  }
  case 1 : {
    OS << " [[gnu::const]]";
    break;
  }
  case 2 : {
    OS << " __attribute__((__const))";
    break;
  }
  case 3 : {
    OS << " [[gnu::__const]]";
    break;
  }
}
}

const char *ConstAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "const";
  case 1:
    return "const";
  case 2:
    return "__const";
  case 3:
    return "__const";
  }
}

ConstructorAttr *ConstructorAttr::clone(ASTContext &C) const {
  return new (C) ConstructorAttr(getLocation(), C, priority, getSpellingListIndex());
}

void ConstructorAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((constructor(" << getPriority() << ")))";
    break;
  }
  case 1 : {
    OS << " [[gnu::constructor(" << getPriority() << ")]]";
    break;
  }
}
}

const char *ConstructorAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "constructor";
  case 1:
    return "constructor";
  }
}

ConsumableAttr *ConsumableAttr::clone(ASTContext &C) const {
  return new (C) ConsumableAttr(getLocation(), C, defaultState, getSpellingListIndex());
}

void ConsumableAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((consumable(" << getDefaultState() << ")))";
    break;
  }
}
}

const char *ConsumableAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "consumable";
  }
}

ConsumableAutoCastAttr *ConsumableAutoCastAttr::clone(ASTContext &C) const {
  return new (C) ConsumableAutoCastAttr(getLocation(), C, getSpellingListIndex());
}

void ConsumableAutoCastAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((consumable_auto_cast_state))";
    break;
  }
}
}

const char *ConsumableAutoCastAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "consumable_auto_cast_state";
  }
}

ConsumableSetOnReadAttr *ConsumableSetOnReadAttr::clone(ASTContext &C) const {
  return new (C) ConsumableSetOnReadAttr(getLocation(), C, getSpellingListIndex());
}

void ConsumableSetOnReadAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((consumable_set_state_on_read))";
    break;
  }
}
}

const char *ConsumableSetOnReadAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "consumable_set_state_on_read";
  }
}

DLLExportAttr *DLLExportAttr::clone(ASTContext &C) const {
  return new (C) DLLExportAttr(getLocation(), C, getSpellingListIndex());
}

void DLLExportAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __declspec(dllexport)";
    break;
  }
  case 1 : {
    OS << " __attribute__((dllexport))";
    break;
  }
  case 2 : {
    OS << " [[gnu::dllexport]]";
    break;
  }
}
}

const char *DLLExportAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "dllexport";
  case 1:
    return "dllexport";
  case 2:
    return "dllexport";
  }
}

DLLImportAttr *DLLImportAttr::clone(ASTContext &C) const {
  return new (C) DLLImportAttr(getLocation(), C, getSpellingListIndex());
}

void DLLImportAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __declspec(dllimport)";
    break;
  }
  case 1 : {
    OS << " __attribute__((dllimport))";
    break;
  }
  case 2 : {
    OS << " [[gnu::dllimport]]";
    break;
  }
}
}

const char *DLLImportAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "dllimport";
  case 1:
    return "dllimport";
  case 2:
    return "dllimport";
  }
}

DeprecatedAttr *DeprecatedAttr::clone(ASTContext &C) const {
  return new (C) DeprecatedAttr(getLocation(), C, getMessage(), getSpellingListIndex());
}

void DeprecatedAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((deprecated(\"" << getMessage() << "\")))";
    break;
  }
  case 1 : {
    OS << " [[gnu::deprecated(\"" << getMessage() << "\")]]";
    break;
  }
  case 2 : {
    OS << " __declspec(deprecated(\"" << getMessage() << "\"))";
    break;
  }
  case 3 : {
    OS << " [[deprecated(\"" << getMessage() << "\")]]";
    break;
  }
}
}

const char *DeprecatedAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "deprecated";
  case 1:
    return "deprecated";
  case 2:
    return "deprecated";
  case 3:
    return "deprecated";
  }
}

DestructorAttr *DestructorAttr::clone(ASTContext &C) const {
  return new (C) DestructorAttr(getLocation(), C, priority, getSpellingListIndex());
}

void DestructorAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((destructor(" << getPriority() << ")))";
    break;
  }
  case 1 : {
    OS << " [[gnu::destructor(" << getPriority() << ")]]";
    break;
  }
}
}

const char *DestructorAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "destructor";
  case 1:
    return "destructor";
  }
}

EnableIfAttr *EnableIfAttr::clone(ASTContext &C) const {
  return new (C) EnableIfAttr(getLocation(), C, cond, getMessage(), getSpellingListIndex());
}

void EnableIfAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((enable_if(" << getCond() << ", \"" << getMessage() << "\")))";
    break;
  }
}
}

const char *EnableIfAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "enable_if";
  }
}

ExclusiveTrylockFunctionAttr *ExclusiveTrylockFunctionAttr::clone(ASTContext &C) const {
  return new (C) ExclusiveTrylockFunctionAttr(getLocation(), C, successValue, args, argsSize, getSpellingListIndex());
}

void ExclusiveTrylockFunctionAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((exclusive_trylock_function(" << getSuccessValue() << ", ";
  bool isFirst = true;
  for (ExclusiveTrylockFunctionAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")))";
    break;
  }
}
}

const char *ExclusiveTrylockFunctionAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "exclusive_trylock_function";
  }
}

FallThroughAttr *FallThroughAttr::clone(ASTContext &C) const {
  return new (C) FallThroughAttr(getLocation(), C, getSpellingListIndex());
}

void FallThroughAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " [[clang::fallthrough]]";
    break;
  }
}
}

const char *FallThroughAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "fallthrough";
  }
}

FastCallAttr *FastCallAttr::clone(ASTContext &C) const {
  return new (C) FastCallAttr(getLocation(), C, getSpellingListIndex());
}

void FastCallAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((fastcall))";
    break;
  }
  case 1 : {
    OS << " [[gnu::fastcall]]";
    break;
  }
  case 2 : {
    OS << " __fastcall";
    break;
  }
  case 3 : {
    OS << " _fastcall";
    break;
  }
}
}

const char *FastCallAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "fastcall";
  case 1:
    return "fastcall";
  case 2:
    return "__fastcall";
  case 3:
    return "_fastcall";
  }
}

FinalAttr *FinalAttr::clone(ASTContext &C) const {
  return new (C) FinalAttr(getLocation(), C, getSpellingListIndex());
}

void FinalAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " final";
    break;
  }
  case 1 : {
    OS << " sealed";
    break;
  }
}
}

const char *FinalAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "final";
  case 1:
    return "sealed";
  }
}

FormatAttr *FormatAttr::clone(ASTContext &C) const {
  return new (C) FormatAttr(getLocation(), C, type, formatIdx, firstArg, getSpellingListIndex());
}

void FormatAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((format(" << getType()->getName() << ", " << getFormatIdx() << ", " << getFirstArg() << ")))";
    break;
  }
  case 1 : {
    OS << " [[gnu::format(" << getType()->getName() << ", " << getFormatIdx() << ", " << getFirstArg() << ")]]";
    break;
  }
}
}

const char *FormatAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "format";
  case 1:
    return "format";
  }
}

FormatArgAttr *FormatArgAttr::clone(ASTContext &C) const {
  return new (C) FormatArgAttr(getLocation(), C, formatIdx, getSpellingListIndex());
}

void FormatArgAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((format_arg(" << getFormatIdx() << ")))";
    break;
  }
  case 1 : {
    OS << " [[gnu::format_arg(" << getFormatIdx() << ")]]";
    break;
  }
}
}

const char *FormatArgAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "format_arg";
  case 1:
    return "format_arg";
  }
}

GNUInlineAttr *GNUInlineAttr::clone(ASTContext &C) const {
  return new (C) GNUInlineAttr(getLocation(), C, getSpellingListIndex());
}

void GNUInlineAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((gnu_inline))";
    break;
  }
  case 1 : {
    OS << " [[gnu::gnu_inline]]";
    break;
  }
}
}

const char *GNUInlineAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "gnu_inline";
  case 1:
    return "gnu_inline";
  }
}

GuardedByAttr *GuardedByAttr::clone(ASTContext &C) const {
  return new (C) GuardedByAttr(getLocation(), C, arg, getSpellingListIndex());
}

void GuardedByAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((guarded_by(" << getArg() << ")))";
    break;
  }
}
}

const char *GuardedByAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "guarded_by";
  }
}

GuardedVarAttr *GuardedVarAttr::clone(ASTContext &C) const {
  return new (C) GuardedVarAttr(getLocation(), C, getSpellingListIndex());
}

void GuardedVarAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((guarded_var))";
    break;
  }
}
}

const char *GuardedVarAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "guarded_var";
  }
}

HotAttr *HotAttr::clone(ASTContext &C) const {
  return new (C) HotAttr(getLocation(), C, getSpellingListIndex());
}

void HotAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((hot))";
    break;
  }
  case 1 : {
    OS << " [[gnu::hot]]";
    break;
  }
}
}

const char *HotAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "hot";
  case 1:
    return "hot";
  }
}

IBActionAttr *IBActionAttr::clone(ASTContext &C) const {
  return new (C) IBActionAttr(getLocation(), C, getSpellingListIndex());
}

void IBActionAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((ibaction))";
    break;
  }
}
}

const char *IBActionAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "ibaction";
  }
}

IBOutletAttr *IBOutletAttr::clone(ASTContext &C) const {
  return new (C) IBOutletAttr(getLocation(), C, getSpellingListIndex());
}

void IBOutletAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((iboutlet))";
    break;
  }
}
}

const char *IBOutletAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "iboutlet";
  }
}

IBOutletCollectionAttr *IBOutletCollectionAttr::clone(ASTContext &C) const {
  return new (C) IBOutletCollectionAttr(getLocation(), C, interface, getSpellingListIndex());
}

void IBOutletCollectionAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((iboutletcollection(" << getInterface().getAsString() << ")))";
    break;
  }
}
}

const char *IBOutletCollectionAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "iboutletcollection";
  }
}

InitPriorityAttr *InitPriorityAttr::clone(ASTContext &C) const {
  return new (C) InitPriorityAttr(getLocation(), C, priority, getSpellingListIndex());
}

void InitPriorityAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((init_priority(" << getPriority() << ")))";
    break;
  }
}
}

const char *InitPriorityAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "init_priority";
  }
}

IntelOclBiccAttr *IntelOclBiccAttr::clone(ASTContext &C) const {
  return new (C) IntelOclBiccAttr(getLocation(), C, getSpellingListIndex());
}

void IntelOclBiccAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((intel_ocl_bicc))";
    break;
  }
}
}

const char *IntelOclBiccAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "intel_ocl_bicc";
  }
}

LockReturnedAttr *LockReturnedAttr::clone(ASTContext &C) const {
  return new (C) LockReturnedAttr(getLocation(), C, arg, getSpellingListIndex());
}

void LockReturnedAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((lock_returned(" << getArg() << ")))";
    break;
  }
}
}

const char *LockReturnedAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "lock_returned";
  }
}

LocksExcludedAttr *LocksExcludedAttr::clone(ASTContext &C) const {
  return new (C) LocksExcludedAttr(getLocation(), C, args, argsSize, getSpellingListIndex());
}

void LocksExcludedAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((locks_excluded(";
  bool isFirst = true;
  for (LocksExcludedAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")))";
    break;
  }
}
}

const char *LocksExcludedAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "locks_excluded";
  }
}

MSABIAttr *MSABIAttr::clone(ASTContext &C) const {
  return new (C) MSABIAttr(getLocation(), C, getSpellingListIndex());
}

void MSABIAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((ms_abi))";
    break;
  }
  case 1 : {
    OS << " [[gnu::ms_abi]]";
    break;
  }
}
}

const char *MSABIAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "ms_abi";
  case 1:
    return "ms_abi";
  }
}

MSInheritanceAttr *MSInheritanceAttr::clone(ASTContext &C) const {
  return new (C) MSInheritanceAttr(getLocation(), C, bestCase, getSpellingListIndex());
}

void MSInheritanceAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __single_inheritance(" << getBestCase() << ")";
    break;
  }
  case 1 : {
    OS << " __multiple_inheritance(" << getBestCase() << ")";
    break;
  }
  case 2 : {
    OS << " __virtual_inheritance(" << getBestCase() << ")";
    break;
  }
  case 3 : {
    OS << " __unspecified_inheritance(" << getBestCase() << ")";
    break;
  }
}
}

const char *MSInheritanceAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "__single_inheritance";
  case 1:
    return "__multiple_inheritance";
  case 2:
    return "__virtual_inheritance";
  case 3:
    return "__unspecified_inheritance";
  }
}

MSP430InterruptAttr *MSP430InterruptAttr::clone(ASTContext &C) const {
  return new (C) MSP430InterruptAttr(getLocation(), C, number, getSpellingListIndex());
}

void MSP430InterruptAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((interrupt(" << getNumber() << ")))";
    break;
  }
}
}

const char *MSP430InterruptAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "interrupt";
  }
}

MSVtorDispAttr *MSVtorDispAttr::clone(ASTContext &C) const {
  return new (C) MSVtorDispAttr(getLocation(), C, vdm, getSpellingListIndex());
}

void MSVtorDispAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
}

const char *MSVtorDispAttr::getSpelling() const {
  return "(No spelling)";
}

MallocAttr *MallocAttr::clone(ASTContext &C) const {
  return new (C) MallocAttr(getLocation(), C, getSpellingListIndex());
}

void MallocAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((malloc))";
    break;
  }
  case 1 : {
    OS << " [[gnu::malloc]]";
    break;
  }
}
}

const char *MallocAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "malloc";
  case 1:
    return "malloc";
  }
}

MaxFieldAlignmentAttr *MaxFieldAlignmentAttr::clone(ASTContext &C) const {
  return new (C) MaxFieldAlignmentAttr(getLocation(), C, alignment, getSpellingListIndex());
}

void MaxFieldAlignmentAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
}

const char *MaxFieldAlignmentAttr::getSpelling() const {
  return "(No spelling)";
}

MayAliasAttr *MayAliasAttr::clone(ASTContext &C) const {
  return new (C) MayAliasAttr(getLocation(), C, getSpellingListIndex());
}

void MayAliasAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((may_alias))";
    break;
  }
  case 1 : {
    OS << " [[gnu::may_alias]]";
    break;
  }
}
}

const char *MayAliasAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "may_alias";
  case 1:
    return "may_alias";
  }
}

MinSizeAttr *MinSizeAttr::clone(ASTContext &C) const {
  return new (C) MinSizeAttr(getLocation(), C, getSpellingListIndex());
}

void MinSizeAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((minsize))";
    break;
  }
}
}

const char *MinSizeAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "minsize";
  }
}

Mips16Attr *Mips16Attr::clone(ASTContext &C) const {
  return new (C) Mips16Attr(getLocation(), C, getSpellingListIndex());
}

void Mips16Attr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((mips16))";
    break;
  }
  case 1 : {
    OS << " [[gnu::mips16]]";
    break;
  }
}
}

const char *Mips16Attr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "mips16";
  case 1:
    return "mips16";
  }
}

ModeAttr *ModeAttr::clone(ASTContext &C) const {
  return new (C) ModeAttr(getLocation(), C, mode, getSpellingListIndex());
}

void ModeAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((mode(" << getMode()->getName() << ")))";
    break;
  }
  case 1 : {
    OS << " [[gnu::mode(" << getMode()->getName() << ")]]";
    break;
  }
}
}

const char *ModeAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "mode";
  case 1:
    return "mode";
  }
}

MsStructAttr *MsStructAttr::clone(ASTContext &C) const {
  return new (C) MsStructAttr(getLocation(), C, getSpellingListIndex());
}

void MsStructAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((ms_struct))";
    break;
  }
  case 1 : {
    OS << " [[gnu::ms_struct]]";
    break;
  }
}
}

const char *MsStructAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "ms_struct";
  case 1:
    return "ms_struct";
  }
}

NSConsumedAttr *NSConsumedAttr::clone(ASTContext &C) const {
  return new (C) NSConsumedAttr(getLocation(), C, getSpellingListIndex());
}

void NSConsumedAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((ns_consumed))";
    break;
  }
}
}

const char *NSConsumedAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "ns_consumed";
  }
}

NSConsumesSelfAttr *NSConsumesSelfAttr::clone(ASTContext &C) const {
  return new (C) NSConsumesSelfAttr(getLocation(), C, getSpellingListIndex());
}

void NSConsumesSelfAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((ns_consumes_self))";
    break;
  }
}
}

const char *NSConsumesSelfAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "ns_consumes_self";
  }
}

NSReturnsAutoreleasedAttr *NSReturnsAutoreleasedAttr::clone(ASTContext &C) const {
  return new (C) NSReturnsAutoreleasedAttr(getLocation(), C, getSpellingListIndex());
}

void NSReturnsAutoreleasedAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((ns_returns_autoreleased))";
    break;
  }
}
}

const char *NSReturnsAutoreleasedAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "ns_returns_autoreleased";
  }
}

NSReturnsNotRetainedAttr *NSReturnsNotRetainedAttr::clone(ASTContext &C) const {
  return new (C) NSReturnsNotRetainedAttr(getLocation(), C, getSpellingListIndex());
}

void NSReturnsNotRetainedAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((ns_returns_not_retained))";
    break;
  }
}
}

const char *NSReturnsNotRetainedAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "ns_returns_not_retained";
  }
}

NSReturnsRetainedAttr *NSReturnsRetainedAttr::clone(ASTContext &C) const {
  return new (C) NSReturnsRetainedAttr(getLocation(), C, getSpellingListIndex());
}

void NSReturnsRetainedAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((ns_returns_retained))";
    break;
  }
}
}

const char *NSReturnsRetainedAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "ns_returns_retained";
  }
}

NakedAttr *NakedAttr::clone(ASTContext &C) const {
  return new (C) NakedAttr(getLocation(), C, getSpellingListIndex());
}

void NakedAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((naked))";
    break;
  }
  case 1 : {
    OS << " [[gnu::naked]]";
    break;
  }
  case 2 : {
    OS << " __declspec(naked)";
    break;
  }
}
}

const char *NakedAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "naked";
  case 1:
    return "naked";
  case 2:
    return "naked";
  }
}

NoCommonAttr *NoCommonAttr::clone(ASTContext &C) const {
  return new (C) NoCommonAttr(getLocation(), C, getSpellingListIndex());
}

void NoCommonAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((nocommon))";
    break;
  }
  case 1 : {
    OS << " [[gnu::nocommon]]";
    break;
  }
}
}

const char *NoCommonAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "nocommon";
  case 1:
    return "nocommon";
  }
}

NoDebugAttr *NoDebugAttr::clone(ASTContext &C) const {
  return new (C) NoDebugAttr(getLocation(), C, getSpellingListIndex());
}

void NoDebugAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((nodebug))";
    break;
  }
}
}

const char *NoDebugAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "nodebug";
  }
}

NoDuplicateAttr *NoDuplicateAttr::clone(ASTContext &C) const {
  return new (C) NoDuplicateAttr(getLocation(), C, getSpellingListIndex());
}

void NoDuplicateAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((noduplicate))";
    break;
  }
  case 1 : {
    OS << " [[clang::noduplicate]]";
    break;
  }
}
}

const char *NoDuplicateAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "noduplicate";
  case 1:
    return "noduplicate";
  }
}

NoInlineAttr *NoInlineAttr::clone(ASTContext &C) const {
  return new (C) NoInlineAttr(getLocation(), C, getSpellingListIndex());
}

void NoInlineAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((noinline))";
    break;
  }
  case 1 : {
    OS << " [[gnu::noinline]]";
    break;
  }
  case 2 : {
    OS << " __declspec(noinline)";
    break;
  }
}
}

const char *NoInlineAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "noinline";
  case 1:
    return "noinline";
  case 2:
    return "noinline";
  }
}

NoInstrumentFunctionAttr *NoInstrumentFunctionAttr::clone(ASTContext &C) const {
  return new (C) NoInstrumentFunctionAttr(getLocation(), C, getSpellingListIndex());
}

void NoInstrumentFunctionAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((no_instrument_function))";
    break;
  }
  case 1 : {
    OS << " [[gnu::no_instrument_function]]";
    break;
  }
}
}

const char *NoInstrumentFunctionAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "no_instrument_function";
  case 1:
    return "no_instrument_function";
  }
}

NoMips16Attr *NoMips16Attr::clone(ASTContext &C) const {
  return new (C) NoMips16Attr(getLocation(), C, getSpellingListIndex());
}

void NoMips16Attr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((nomips16))";
    break;
  }
  case 1 : {
    OS << " [[gnu::nomips16]]";
    break;
  }
}
}

const char *NoMips16Attr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "nomips16";
  case 1:
    return "nomips16";
  }
}

NoReturnAttr *NoReturnAttr::clone(ASTContext &C) const {
  return new (C) NoReturnAttr(getLocation(), C, getSpellingListIndex());
}

void NoReturnAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((noreturn))";
    break;
  }
  case 1 : {
    OS << " [[gnu::noreturn]]";
    break;
  }
  case 2 : {
    OS << " __declspec(noreturn)";
    break;
  }
}
}

const char *NoReturnAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "noreturn";
  case 1:
    return "noreturn";
  case 2:
    return "noreturn";
  }
}

NoSanitizeAddressAttr *NoSanitizeAddressAttr::clone(ASTContext &C) const {
  return new (C) NoSanitizeAddressAttr(getLocation(), C, getSpellingListIndex());
}

void NoSanitizeAddressAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((no_address_safety_analysis))";
    break;
  }
  case 1 : {
    OS << " [[gnu::no_address_safety_analysis]]";
    break;
  }
  case 2 : {
    OS << " __attribute__((no_sanitize_address))";
    break;
  }
  case 3 : {
    OS << " [[gnu::no_sanitize_address]]";
    break;
  }
}
}

const char *NoSanitizeAddressAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "no_address_safety_analysis";
  case 1:
    return "no_address_safety_analysis";
  case 2:
    return "no_sanitize_address";
  case 3:
    return "no_sanitize_address";
  }
}

NoSanitizeMemoryAttr *NoSanitizeMemoryAttr::clone(ASTContext &C) const {
  return new (C) NoSanitizeMemoryAttr(getLocation(), C, getSpellingListIndex());
}

void NoSanitizeMemoryAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((no_sanitize_memory))";
    break;
  }
}
}

const char *NoSanitizeMemoryAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "no_sanitize_memory";
  }
}

NoSanitizeThreadAttr *NoSanitizeThreadAttr::clone(ASTContext &C) const {
  return new (C) NoSanitizeThreadAttr(getLocation(), C, getSpellingListIndex());
}

void NoSanitizeThreadAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((no_sanitize_thread))";
    break;
  }
}
}

const char *NoSanitizeThreadAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "no_sanitize_thread";
  }
}

NoThreadSafetyAnalysisAttr *NoThreadSafetyAnalysisAttr::clone(ASTContext &C) const {
  return new (C) NoThreadSafetyAnalysisAttr(getLocation(), C, getSpellingListIndex());
}

void NoThreadSafetyAnalysisAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((no_thread_safety_analysis))";
    break;
  }
}
}

const char *NoThreadSafetyAnalysisAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "no_thread_safety_analysis";
  }
}

NoThrowAttr *NoThrowAttr::clone(ASTContext &C) const {
  return new (C) NoThrowAttr(getLocation(), C, getSpellingListIndex());
}

void NoThrowAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((nothrow))";
    break;
  }
  case 1 : {
    OS << " [[gnu::nothrow]]";
    break;
  }
  case 2 : {
    OS << " __declspec(nothrow)";
    break;
  }
}
}

const char *NoThrowAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "nothrow";
  case 1:
    return "nothrow";
  case 2:
    return "nothrow";
  }
}

NonNullAttr *NonNullAttr::clone(ASTContext &C) const {
  return new (C) NonNullAttr(getLocation(), C, args, argsSize, getSpellingListIndex());
}

void NonNullAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((nonnull(";
  bool isFirst = true;
  for (NonNullAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")))";
    break;
  }
  case 1 : {
    OS << " [[gnu::nonnull(";
  bool isFirst = true;
  for (NonNullAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")]]";
    break;
  }
}
}

const char *NonNullAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "nonnull";
  case 1:
    return "nonnull";
  }
}

ObjCBridgeAttr *ObjCBridgeAttr::clone(ASTContext &C) const {
  return new (C) ObjCBridgeAttr(getLocation(), C, bridgedType, getSpellingListIndex());
}

void ObjCBridgeAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((objc_bridge(" << getBridgedType()->getName() << ")))";
    break;
  }
}
}

const char *ObjCBridgeAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "objc_bridge";
  }
}

ObjCBridgeMutableAttr *ObjCBridgeMutableAttr::clone(ASTContext &C) const {
  return new (C) ObjCBridgeMutableAttr(getLocation(), C, bridgedType, getSpellingListIndex());
}

void ObjCBridgeMutableAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((objc_bridge_mutable(" << getBridgedType()->getName() << ")))";
    break;
  }
}
}

const char *ObjCBridgeMutableAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "objc_bridge_mutable";
  }
}

ObjCBridgeRelatedAttr *ObjCBridgeRelatedAttr::clone(ASTContext &C) const {
  return new (C) ObjCBridgeRelatedAttr(getLocation(), C, relatedClass, classMethod, instanceMethod, getSpellingListIndex());
}

void ObjCBridgeRelatedAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((objc_bridge_related(" << getRelatedClass()->getName() << ", " << getClassMethod()->getName() << ", " << getInstanceMethod()->getName() << ")))";
    break;
  }
}
}

const char *ObjCBridgeRelatedAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "objc_bridge_related";
  }
}

ObjCDesignatedInitializerAttr *ObjCDesignatedInitializerAttr::clone(ASTContext &C) const {
  return new (C) ObjCDesignatedInitializerAttr(getLocation(), C, getSpellingListIndex());
}

void ObjCDesignatedInitializerAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((objc_designated_initializer))";
    break;
  }
}
}

const char *ObjCDesignatedInitializerAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "objc_designated_initializer";
  }
}

ObjCExceptionAttr *ObjCExceptionAttr::clone(ASTContext &C) const {
  return new (C) ObjCExceptionAttr(getLocation(), C, getSpellingListIndex());
}

void ObjCExceptionAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((objc_exception))";
    break;
  }
}
}

const char *ObjCExceptionAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "objc_exception";
  }
}

ObjCExplicitProtocolImplAttr *ObjCExplicitProtocolImplAttr::clone(ASTContext &C) const {
  return new (C) ObjCExplicitProtocolImplAttr(getLocation(), C, getSpellingListIndex());
}

void ObjCExplicitProtocolImplAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((objc_protocol_requires_explicit_implementation))";
    break;
  }
}
}

const char *ObjCExplicitProtocolImplAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "objc_protocol_requires_explicit_implementation";
  }
}

ObjCMethodFamilyAttr *ObjCMethodFamilyAttr::clone(ASTContext &C) const {
  return new (C) ObjCMethodFamilyAttr(getLocation(), C, family, getSpellingListIndex());
}

void ObjCMethodFamilyAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((objc_method_family(" << getFamily() << ")))";
    break;
  }
}
}

const char *ObjCMethodFamilyAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "objc_method_family";
  }
}

ObjCNSObjectAttr *ObjCNSObjectAttr::clone(ASTContext &C) const {
  return new (C) ObjCNSObjectAttr(getLocation(), C, getSpellingListIndex());
}

void ObjCNSObjectAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((NSObject))";
    break;
  }
}
}

const char *ObjCNSObjectAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "NSObject";
  }
}

ObjCPreciseLifetimeAttr *ObjCPreciseLifetimeAttr::clone(ASTContext &C) const {
  return new (C) ObjCPreciseLifetimeAttr(getLocation(), C, getSpellingListIndex());
}

void ObjCPreciseLifetimeAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((objc_precise_lifetime))";
    break;
  }
}
}

const char *ObjCPreciseLifetimeAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "objc_precise_lifetime";
  }
}

ObjCRequiresPropertyDefsAttr *ObjCRequiresPropertyDefsAttr::clone(ASTContext &C) const {
  return new (C) ObjCRequiresPropertyDefsAttr(getLocation(), C, getSpellingListIndex());
}

void ObjCRequiresPropertyDefsAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((objc_requires_property_definitions))";
    break;
  }
}
}

const char *ObjCRequiresPropertyDefsAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "objc_requires_property_definitions";
  }
}

ObjCRequiresSuperAttr *ObjCRequiresSuperAttr::clone(ASTContext &C) const {
  return new (C) ObjCRequiresSuperAttr(getLocation(), C, getSpellingListIndex());
}

void ObjCRequiresSuperAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((objc_requires_super))";
    break;
  }
}
}

const char *ObjCRequiresSuperAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "objc_requires_super";
  }
}

ObjCReturnsInnerPointerAttr *ObjCReturnsInnerPointerAttr::clone(ASTContext &C) const {
  return new (C) ObjCReturnsInnerPointerAttr(getLocation(), C, getSpellingListIndex());
}

void ObjCReturnsInnerPointerAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((objc_returns_inner_pointer))";
    break;
  }
}
}

const char *ObjCReturnsInnerPointerAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "objc_returns_inner_pointer";
  }
}

ObjCRootClassAttr *ObjCRootClassAttr::clone(ASTContext &C) const {
  return new (C) ObjCRootClassAttr(getLocation(), C, getSpellingListIndex());
}

void ObjCRootClassAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((objc_root_class))";
    break;
  }
}
}

const char *ObjCRootClassAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "objc_root_class";
  }
}

OpenCLImageAccessAttr *OpenCLImageAccessAttr::clone(ASTContext &C) const {
  return new (C) OpenCLImageAccessAttr(getLocation(), C, getSpellingListIndex());
}

void OpenCLImageAccessAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __read_only";
    break;
  }
  case 1 : {
    OS << " read_only";
    break;
  }
  case 2 : {
    OS << " __write_only";
    break;
  }
  case 3 : {
    OS << " write_only";
    break;
  }
  case 4 : {
    OS << " __read_write";
    break;
  }
  case 5 : {
    OS << " read_write";
    break;
  }
}
}

const char *OpenCLImageAccessAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "__read_only";
  case 1:
    return "read_only";
  case 2:
    return "__write_only";
  case 3:
    return "write_only";
  case 4:
    return "__read_write";
  case 5:
    return "read_write";
  }
}

OpenCLKernelAttr *OpenCLKernelAttr::clone(ASTContext &C) const {
  return new (C) OpenCLKernelAttr(getLocation(), C, getSpellingListIndex());
}

void OpenCLKernelAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __kernel";
    break;
  }
  case 1 : {
    OS << " kernel";
    break;
  }
}
}

const char *OpenCLKernelAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "__kernel";
  case 1:
    return "kernel";
  }
}

OptimizeNoneAttr *OptimizeNoneAttr::clone(ASTContext &C) const {
  return new (C) OptimizeNoneAttr(getLocation(), C, getSpellingListIndex());
}

void OptimizeNoneAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((optnone))";
    break;
  }
  case 1 : {
    OS << " [[clang::optnone]]";
    break;
  }
}
}

const char *OptimizeNoneAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "optnone";
  case 1:
    return "optnone";
  }
}

OverloadableAttr *OverloadableAttr::clone(ASTContext &C) const {
  return new (C) OverloadableAttr(getLocation(), C, getSpellingListIndex());
}

void OverloadableAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((overloadable))";
    break;
  }
}
}

const char *OverloadableAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "overloadable";
  }
}

OverrideAttr *OverrideAttr::clone(ASTContext &C) const {
  return new (C) OverrideAttr(getLocation(), C, getSpellingListIndex());
}

void OverrideAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " override";
    break;
  }
}
}

const char *OverrideAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "override";
  }
}

OwnershipAttr *OwnershipAttr::clone(ASTContext &C) const {
  return new (C) OwnershipAttr(getLocation(), C, module, args, argsSize, getSpellingListIndex());
}

void OwnershipAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((ownership_holds(" << getModule()->getName() << ", ";
  bool isFirst = true;
  for (OwnershipAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")))";
    break;
  }
  case 1 : {
    OS << " __attribute__((ownership_returns(" << getModule()->getName() << ", ";
  bool isFirst = true;
  for (OwnershipAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")))";
    break;
  }
  case 2 : {
    OS << " __attribute__((ownership_takes(" << getModule()->getName() << ", ";
  bool isFirst = true;
  for (OwnershipAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")))";
    break;
  }
}
}

const char *OwnershipAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "ownership_holds";
  case 1:
    return "ownership_returns";
  case 2:
    return "ownership_takes";
  }
}

PackedAttr *PackedAttr::clone(ASTContext &C) const {
  return new (C) PackedAttr(getLocation(), C, getSpellingListIndex());
}

void PackedAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((packed))";
    break;
  }
  case 1 : {
    OS << " [[gnu::packed]]";
    break;
  }
}
}

const char *PackedAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "packed";
  case 1:
    return "packed";
  }
}

ParamTypestateAttr *ParamTypestateAttr::clone(ASTContext &C) const {
  return new (C) ParamTypestateAttr(getLocation(), C, paramState, getSpellingListIndex());
}

void ParamTypestateAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((param_typestate(" << getParamState() << ")))";
    break;
  }
}
}

const char *ParamTypestateAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "param_typestate";
  }
}

PascalAttr *PascalAttr::clone(ASTContext &C) const {
  return new (C) PascalAttr(getLocation(), C, getSpellingListIndex());
}

void PascalAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((pascal))";
    break;
  }
  case 1 : {
    OS << " __pascal";
    break;
  }
  case 2 : {
    OS << " _pascal";
    break;
  }
}
}

const char *PascalAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "pascal";
  case 1:
    return "__pascal";
  case 2:
    return "_pascal";
  }
}

PcsAttr *PcsAttr::clone(ASTContext &C) const {
  return new (C) PcsAttr(getLocation(), C, pCS, getSpellingListIndex());
}

void PcsAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((pcs(" << getPCS() << ")))";
    break;
  }
  case 1 : {
    OS << " [[gnu::pcs(" << getPCS() << ")]]";
    break;
  }
}
}

const char *PcsAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "pcs";
  case 1:
    return "pcs";
  }
}

PnaclCallAttr *PnaclCallAttr::clone(ASTContext &C) const {
  return new (C) PnaclCallAttr(getLocation(), C, getSpellingListIndex());
}

void PnaclCallAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((pnaclcall))";
    break;
  }
}
}

const char *PnaclCallAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "pnaclcall";
  }
}

PtGuardedByAttr *PtGuardedByAttr::clone(ASTContext &C) const {
  return new (C) PtGuardedByAttr(getLocation(), C, arg, getSpellingListIndex());
}

void PtGuardedByAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((pt_guarded_by(" << getArg() << ")))";
    break;
  }
}
}

const char *PtGuardedByAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "pt_guarded_by";
  }
}

PtGuardedVarAttr *PtGuardedVarAttr::clone(ASTContext &C) const {
  return new (C) PtGuardedVarAttr(getLocation(), C, getSpellingListIndex());
}

void PtGuardedVarAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((pt_guarded_var))";
    break;
  }
}
}

const char *PtGuardedVarAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "pt_guarded_var";
  }
}

PureAttr *PureAttr::clone(ASTContext &C) const {
  return new (C) PureAttr(getLocation(), C, getSpellingListIndex());
}

void PureAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((pure))";
    break;
  }
  case 1 : {
    OS << " [[gnu::pure]]";
    break;
  }
}
}

const char *PureAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "pure";
  case 1:
    return "pure";
  }
}

ReleaseCapabilityAttr *ReleaseCapabilityAttr::clone(ASTContext &C) const {
  return new (C) ReleaseCapabilityAttr(getLocation(), C, args, argsSize, getSpellingListIndex());
}

void ReleaseCapabilityAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((release_capability(";
  bool isFirst = true;
  for (ReleaseCapabilityAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")))";
    break;
  }
  case 1 : {
    OS << " [[clang::release_capability(";
  bool isFirst = true;
  for (ReleaseCapabilityAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")]]";
    break;
  }
  case 2 : {
    OS << " __attribute__((release_shared_capability(";
  bool isFirst = true;
  for (ReleaseCapabilityAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")))";
    break;
  }
  case 3 : {
    OS << " [[clang::release_shared_capability(";
  bool isFirst = true;
  for (ReleaseCapabilityAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")]]";
    break;
  }
  case 4 : {
    OS << " __attribute__((release_generic_capability(";
  bool isFirst = true;
  for (ReleaseCapabilityAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")))";
    break;
  }
  case 5 : {
    OS << " [[clang::release_generic_capability(";
  bool isFirst = true;
  for (ReleaseCapabilityAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")]]";
    break;
  }
  case 6 : {
    OS << " __attribute__((unlock_function(";
  bool isFirst = true;
  for (ReleaseCapabilityAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")))";
    break;
  }
}
}

const char *ReleaseCapabilityAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "release_capability";
  case 1:
    return "release_capability";
  case 2:
    return "release_shared_capability";
  case 3:
    return "release_shared_capability";
  case 4:
    return "release_generic_capability";
  case 5:
    return "release_generic_capability";
  case 6:
    return "unlock_function";
  }
}

ReqdWorkGroupSizeAttr *ReqdWorkGroupSizeAttr::clone(ASTContext &C) const {
  return new (C) ReqdWorkGroupSizeAttr(getLocation(), C, xDim, yDim, zDim, getSpellingListIndex());
}

void ReqdWorkGroupSizeAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((reqd_work_group_size(" << getXDim() << ", " << getYDim() << ", " << getZDim() << ")))";
    break;
  }
}
}

const char *ReqdWorkGroupSizeAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "reqd_work_group_size";
  }
}

RequiresCapabilityAttr *RequiresCapabilityAttr::clone(ASTContext &C) const {
  return new (C) RequiresCapabilityAttr(getLocation(), C, args, argsSize, getSpellingListIndex());
}

void RequiresCapabilityAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((requires_capability(";
  bool isFirst = true;
  for (RequiresCapabilityAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")))";
    break;
  }
  case 1 : {
    OS << " [[clang::requires_capability(";
  bool isFirst = true;
  for (RequiresCapabilityAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")]]";
    break;
  }
  case 2 : {
    OS << " __attribute__((exclusive_locks_required(";
  bool isFirst = true;
  for (RequiresCapabilityAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")))";
    break;
  }
  case 3 : {
    OS << " __attribute__((requires_shared_capability(";
  bool isFirst = true;
  for (RequiresCapabilityAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")))";
    break;
  }
  case 4 : {
    OS << " [[clang::requires_shared_capability(";
  bool isFirst = true;
  for (RequiresCapabilityAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")]]";
    break;
  }
  case 5 : {
    OS << " __attribute__((shared_locks_required(";
  bool isFirst = true;
  for (RequiresCapabilityAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")))";
    break;
  }
}
}

const char *RequiresCapabilityAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "requires_capability";
  case 1:
    return "requires_capability";
  case 2:
    return "exclusive_locks_required";
  case 3:
    return "requires_shared_capability";
  case 4:
    return "requires_shared_capability";
  case 5:
    return "shared_locks_required";
  }
}

ReturnTypestateAttr *ReturnTypestateAttr::clone(ASTContext &C) const {
  return new (C) ReturnTypestateAttr(getLocation(), C, state, getSpellingListIndex());
}

void ReturnTypestateAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((return_typestate(" << getState() << ")))";
    break;
  }
}
}

const char *ReturnTypestateAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "return_typestate";
  }
}

ReturnsNonNullAttr *ReturnsNonNullAttr::clone(ASTContext &C) const {
  return new (C) ReturnsNonNullAttr(getLocation(), C, getSpellingListIndex());
}

void ReturnsNonNullAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((returns_nonnull))";
    break;
  }
  case 1 : {
    OS << " [[gnu::returns_nonnull]]";
    break;
  }
}
}

const char *ReturnsNonNullAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "returns_nonnull";
  case 1:
    return "returns_nonnull";
  }
}

ReturnsTwiceAttr *ReturnsTwiceAttr::clone(ASTContext &C) const {
  return new (C) ReturnsTwiceAttr(getLocation(), C, getSpellingListIndex());
}

void ReturnsTwiceAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((returns_twice))";
    break;
  }
  case 1 : {
    OS << " [[gnu::returns_twice]]";
    break;
  }
}
}

const char *ReturnsTwiceAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "returns_twice";
  case 1:
    return "returns_twice";
  }
}

ScopedLockableAttr *ScopedLockableAttr::clone(ASTContext &C) const {
  return new (C) ScopedLockableAttr(getLocation(), C, getSpellingListIndex());
}

void ScopedLockableAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((scoped_lockable))";
    break;
  }
}
}

const char *ScopedLockableAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "scoped_lockable";
  }
}

SectionAttr *SectionAttr::clone(ASTContext &C) const {
  return new (C) SectionAttr(getLocation(), C, getName(), getSpellingListIndex());
}

void SectionAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((section(\"" << getName() << "\")))";
    break;
  }
  case 1 : {
    OS << " [[gnu::section(\"" << getName() << "\")]]";
    break;
  }
  case 2 : {
    OS << " __declspec(allocate(\"" << getName() << "\"))";
    break;
  }
}
}

const char *SectionAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "section";
  case 1:
    return "section";
  case 2:
    return "allocate";
  }
}

SelectAnyAttr *SelectAnyAttr::clone(ASTContext &C) const {
  return new (C) SelectAnyAttr(getLocation(), C, getSpellingListIndex());
}

void SelectAnyAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __declspec(selectany)";
    break;
  }
}
}

const char *SelectAnyAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "selectany";
  }
}

SentinelAttr *SentinelAttr::clone(ASTContext &C) const {
  return new (C) SentinelAttr(getLocation(), C, sentinel, nullPos, getSpellingListIndex());
}

void SentinelAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((sentinel(" << getSentinel() << ", " << getNullPos() << ")))";
    break;
  }
  case 1 : {
    OS << " [[gnu::sentinel(" << getSentinel() << ", " << getNullPos() << ")]]";
    break;
  }
}
}

const char *SentinelAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "sentinel";
  case 1:
    return "sentinel";
  }
}

SetTypestateAttr *SetTypestateAttr::clone(ASTContext &C) const {
  return new (C) SetTypestateAttr(getLocation(), C, newState, getSpellingListIndex());
}

void SetTypestateAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((set_typestate(" << getNewState() << ")))";
    break;
  }
}
}

const char *SetTypestateAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "set_typestate";
  }
}

SharedTrylockFunctionAttr *SharedTrylockFunctionAttr::clone(ASTContext &C) const {
  return new (C) SharedTrylockFunctionAttr(getLocation(), C, successValue, args, argsSize, getSpellingListIndex());
}

void SharedTrylockFunctionAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((shared_trylock_function(" << getSuccessValue() << ", ";
  bool isFirst = true;
  for (SharedTrylockFunctionAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")))";
    break;
  }
}
}

const char *SharedTrylockFunctionAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "shared_trylock_function";
  }
}

StdCallAttr *StdCallAttr::clone(ASTContext &C) const {
  return new (C) StdCallAttr(getLocation(), C, getSpellingListIndex());
}

void StdCallAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((stdcall))";
    break;
  }
  case 1 : {
    OS << " [[gnu::stdcall]]";
    break;
  }
  case 2 : {
    OS << " __stdcall";
    break;
  }
  case 3 : {
    OS << " _stdcall";
    break;
  }
}
}

const char *StdCallAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "stdcall";
  case 1:
    return "stdcall";
  case 2:
    return "__stdcall";
  case 3:
    return "_stdcall";
  }
}

SysVABIAttr *SysVABIAttr::clone(ASTContext &C) const {
  return new (C) SysVABIAttr(getLocation(), C, getSpellingListIndex());
}

void SysVABIAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((sysv_abi))";
    break;
  }
  case 1 : {
    OS << " [[gnu::sysv_abi]]";
    break;
  }
}
}

const char *SysVABIAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "sysv_abi";
  case 1:
    return "sysv_abi";
  }
}

TLSModelAttr *TLSModelAttr::clone(ASTContext &C) const {
  return new (C) TLSModelAttr(getLocation(), C, getModel(), getSpellingListIndex());
}

void TLSModelAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((tls_model(\"" << getModel() << "\")))";
    break;
  }
  case 1 : {
    OS << " [[gnu::tls_model(\"" << getModel() << "\")]]";
    break;
  }
}
}

const char *TLSModelAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "tls_model";
  case 1:
    return "tls_model";
  }
}

TestTypestateAttr *TestTypestateAttr::clone(ASTContext &C) const {
  return new (C) TestTypestateAttr(getLocation(), C, testState, getSpellingListIndex());
}

void TestTypestateAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((test_typestate(" << getTestState() << ")))";
    break;
  }
}
}

const char *TestTypestateAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "test_typestate";
  }
}

ThisCallAttr *ThisCallAttr::clone(ASTContext &C) const {
  return new (C) ThisCallAttr(getLocation(), C, getSpellingListIndex());
}

void ThisCallAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((thiscall))";
    break;
  }
  case 1 : {
    OS << " [[gnu::thiscall]]";
    break;
  }
  case 2 : {
    OS << " __thiscall";
    break;
  }
  case 3 : {
    OS << " _thiscall";
    break;
  }
}
}

const char *ThisCallAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "thiscall";
  case 1:
    return "thiscall";
  case 2:
    return "__thiscall";
  case 3:
    return "_thiscall";
  }
}

TransparentUnionAttr *TransparentUnionAttr::clone(ASTContext &C) const {
  return new (C) TransparentUnionAttr(getLocation(), C, getSpellingListIndex());
}

void TransparentUnionAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((transparent_union))";
    break;
  }
  case 1 : {
    OS << " [[gnu::transparent_union]]";
    break;
  }
}
}

const char *TransparentUnionAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "transparent_union";
  case 1:
    return "transparent_union";
  }
}

TryAcquireCapabilityAttr *TryAcquireCapabilityAttr::clone(ASTContext &C) const {
  return new (C) TryAcquireCapabilityAttr(getLocation(), C, successValue, args, argsSize, getSpellingListIndex());
}

void TryAcquireCapabilityAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((try_acquire_capability(" << getSuccessValue() << ", ";
  bool isFirst = true;
  for (TryAcquireCapabilityAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")))";
    break;
  }
  case 1 : {
    OS << " [[clang::try_acquire_capability(" << getSuccessValue() << ", ";
  bool isFirst = true;
  for (TryAcquireCapabilityAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")]]";
    break;
  }
  case 2 : {
    OS << " __attribute__((try_acquire_shared_capability(" << getSuccessValue() << ", ";
  bool isFirst = true;
  for (TryAcquireCapabilityAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")))";
    break;
  }
  case 3 : {
    OS << " [[clang::try_acquire_shared_capability(" << getSuccessValue() << ", ";
  bool isFirst = true;
  for (TryAcquireCapabilityAttr::args_iterator i = args_begin(), e = args_end(); i != e; ++i) {
    if (isFirst) isFirst = false;
    else OS << ", ";
    OS << *i;
  }
  OS << ")]]";
    break;
  }
}
}

const char *TryAcquireCapabilityAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "try_acquire_capability";
  case 1:
    return "try_acquire_capability";
  case 2:
    return "try_acquire_shared_capability";
  case 3:
    return "try_acquire_shared_capability";
  }
}

TypeTagForDatatypeAttr *TypeTagForDatatypeAttr::clone(ASTContext &C) const {
  return new (C) TypeTagForDatatypeAttr(getLocation(), C, argumentKind, matchingCType, layoutCompatible, mustBeNull, getSpellingListIndex());
}

void TypeTagForDatatypeAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((type_tag_for_datatype(" << getArgumentKind()->getName() << ", " << getMatchingCType().getAsString() << ", " << getLayoutCompatible() << ", " << getMustBeNull() << ")))";
    break;
  }
}
}

const char *TypeTagForDatatypeAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "type_tag_for_datatype";
  }
}

TypeVisibilityAttr *TypeVisibilityAttr::clone(ASTContext &C) const {
  return new (C) TypeVisibilityAttr(getLocation(), C, visibility, getSpellingListIndex());
}

void TypeVisibilityAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((type_visibility(" << getVisibility() << ")))";
    break;
  }
  case 1 : {
    OS << " [[clang::type_visibility(" << getVisibility() << ")]]";
    break;
  }
}
}

const char *TypeVisibilityAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "type_visibility";
  case 1:
    return "type_visibility";
  }
}

UnavailableAttr *UnavailableAttr::clone(ASTContext &C) const {
  return new (C) UnavailableAttr(getLocation(), C, getMessage(), getSpellingListIndex());
}

void UnavailableAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((unavailable(\"" << getMessage() << "\")))";
    break;
  }
}
}

const char *UnavailableAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "unavailable";
  }
}

UnusedAttr *UnusedAttr::clone(ASTContext &C) const {
  return new (C) UnusedAttr(getLocation(), C, getSpellingListIndex());
}

void UnusedAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((unused))";
    break;
  }
  case 1 : {
    OS << " [[gnu::unused]]";
    break;
  }
}
}

const char *UnusedAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "unused";
  case 1:
    return "unused";
  }
}

UsedAttr *UsedAttr::clone(ASTContext &C) const {
  return new (C) UsedAttr(getLocation(), C, getSpellingListIndex());
}

void UsedAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((used))";
    break;
  }
  case 1 : {
    OS << " [[gnu::used]]";
    break;
  }
}
}

const char *UsedAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "used";
  case 1:
    return "used";
  }
}

UuidAttr *UuidAttr::clone(ASTContext &C) const {
  return new (C) UuidAttr(getLocation(), C, getGuid(), getSpellingListIndex());
}

void UuidAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __declspec(uuid(\"" << getGuid() << "\"))";
    break;
  }
}
}

const char *UuidAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "uuid";
  }
}

VecReturnAttr *VecReturnAttr::clone(ASTContext &C) const {
  return new (C) VecReturnAttr(getLocation(), C, getSpellingListIndex());
}

void VecReturnAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((vecreturn))";
    break;
  }
}
}

const char *VecReturnAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "vecreturn";
  }
}

VecTypeHintAttr *VecTypeHintAttr::clone(ASTContext &C) const {
  return new (C) VecTypeHintAttr(getLocation(), C, typeHint, getSpellingListIndex());
}

void VecTypeHintAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((vec_type_hint(" << getTypeHint().getAsString() << ")))";
    break;
  }
}
}

const char *VecTypeHintAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "vec_type_hint";
  }
}

VisibilityAttr *VisibilityAttr::clone(ASTContext &C) const {
  return new (C) VisibilityAttr(getLocation(), C, visibility, getSpellingListIndex());
}

void VisibilityAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((visibility(" << getVisibility() << ")))";
    break;
  }
  case 1 : {
    OS << " [[gnu::visibility(" << getVisibility() << ")]]";
    break;
  }
}
}

const char *VisibilityAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "visibility";
  case 1:
    return "visibility";
  }
}

WarnUnusedAttr *WarnUnusedAttr::clone(ASTContext &C) const {
  return new (C) WarnUnusedAttr(getLocation(), C, getSpellingListIndex());
}

void WarnUnusedAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((warn_unused))";
    break;
  }
}
}

const char *WarnUnusedAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "warn_unused";
  }
}

WarnUnusedResultAttr *WarnUnusedResultAttr::clone(ASTContext &C) const {
  return new (C) WarnUnusedResultAttr(getLocation(), C, getSpellingListIndex());
}

void WarnUnusedResultAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((warn_unused_result))";
    break;
  }
  case 1 : {
    OS << " [[gnu::warn_unused_result]]";
    break;
  }
  case 2 : {
    OS << " [[clang::warn_unused_result]]";
    break;
  }
}
}

const char *WarnUnusedResultAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "warn_unused_result";
  case 1:
    return "warn_unused_result";
  case 2:
    return "warn_unused_result";
  }
}

WeakAttr *WeakAttr::clone(ASTContext &C) const {
  return new (C) WeakAttr(getLocation(), C, getSpellingListIndex());
}

void WeakAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((weak))";
    break;
  }
  case 1 : {
    OS << " [[gnu::weak]]";
    break;
  }
}
}

const char *WeakAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "weak";
  case 1:
    return "weak";
  }
}

WeakImportAttr *WeakImportAttr::clone(ASTContext &C) const {
  return new (C) WeakImportAttr(getLocation(), C, getSpellingListIndex());
}

void WeakImportAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((weak_import))";
    break;
  }
}
}

const char *WeakImportAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "weak_import";
  }
}

WeakRefAttr *WeakRefAttr::clone(ASTContext &C) const {
  return new (C) WeakRefAttr(getLocation(), C, getAliasee(), getSpellingListIndex());
}

void WeakRefAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((weakref(\"" << getAliasee() << "\")))";
    break;
  }
  case 1 : {
    OS << " [[gnu::weakref(\"" << getAliasee() << "\")]]";
    break;
  }
}
}

const char *WeakRefAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "weakref";
  case 1:
    return "weakref";
  }
}

WorkGroupSizeHintAttr *WorkGroupSizeHintAttr::clone(ASTContext &C) const {
  return new (C) WorkGroupSizeHintAttr(getLocation(), C, xDim, yDim, zDim, getSpellingListIndex());
}

void WorkGroupSizeHintAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((work_group_size_hint(" << getXDim() << ", " << getYDim() << ", " << getZDim() << ")))";
    break;
  }
}
}

const char *WorkGroupSizeHintAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "work_group_size_hint";
  }
}

X86ForceAlignArgPointerAttr *X86ForceAlignArgPointerAttr::clone(ASTContext &C) const {
  return new (C) X86ForceAlignArgPointerAttr(getLocation(), C, getSpellingListIndex());
}

void X86ForceAlignArgPointerAttr::printPretty(raw_ostream &OS, const PrintingPolicy &Policy) const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    break;
  case 0 : {
    OS << " __attribute__((force_align_arg_pointer))";
    break;
  }
}
}

const char *X86ForceAlignArgPointerAttr::getSpelling() const {
  switch (SpellingListIndex) {
  default:
    llvm_unreachable("Unknown attribute spelling!");
    return "(No spelling)";
  case 0:
    return "force_align_arg_pointer";
  }
}

