#pragma once

#include <PPPLib/Spectra/Spectrum.h>
#include <PPPLib/CString.h>

namespace SpectrumIO {

	/** <b>CTXTFile</b> is a simple class for reading/writing spectra
			from/to .txt/.xs - files */

	class CTXTFile
	{
	public:
		CTXTFile(void);
		~CTXTFile(void);

		/** Reads a spectrum from a TXT-file */
		static RETURN_CODE ReadSpectrum(CSpectrum &spec, const novac::CString &fileName);

		/** Writes a spectrum to a TXT-file */
		static RETURN_CODE WriteSpectrum(const CSpectrum &spec, const novac::CString &fileName);

		/** Writes a spectrum to a TXT-file */
		static RETURN_CODE WriteSpectrum(const CSpectrum *spec, const novac::CString &fileName);

	};
}