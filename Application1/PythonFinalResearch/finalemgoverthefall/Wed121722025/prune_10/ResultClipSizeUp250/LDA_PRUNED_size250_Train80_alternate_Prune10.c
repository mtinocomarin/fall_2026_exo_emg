// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_10\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.80%
// test_accuracy: 64.06%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_19.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_3.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_13.txt', 'act2\\trial_18.txt', 'act2\\trial_33.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-17 13:46:19
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.079141, 1.078986,
    0.327333, -0.327078,
    0.000210, -0.000247,
    0.049487, -0.049616,
    -0.696939, 0.696990,
    0.053371, -0.053350,
    0.002668, -0.002713,
    -0.037883, 0.037841,
    -1.269317, 1.269174,
    0.729286, -0.729065,
    -0.422602, 0.422511,
    0.464493, -0.464525,
};

float Cg_init[2] = {
    -0.518464, -0.518414
};

float xstd_init[12] = {
    0.001063, 0.000080, 0.010709, 0.079770, 0.002426, 0.000696, 0.077284, 0.157100, 0.000927, 0.000128, 0.019171, 0.071345
};

float xmean_init[12] = {
    0.006512, -0.007687, 0.004394, 0.140455, 0.008473, -0.006908, 0.097424, 0.442273, 0.004342, -0.007713, 0.009545, 0.134546
};

