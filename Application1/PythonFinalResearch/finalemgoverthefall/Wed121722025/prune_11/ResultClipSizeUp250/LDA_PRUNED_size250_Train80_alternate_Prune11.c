// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_11\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.50%
// test_accuracy: 60.94%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_19.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_3.txt', 'act1\\trial_30.txt', 'act1\\trial_33.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_13.txt', 'act2\\trial_18.txt', 'act2\\trial_33.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-17 13:46:50
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.377738, 1.377589,
    0.454442, -0.454245,
    -0.080424, 0.080397,
    0.074577, -0.074673,
    -0.699067, 0.699146,
    0.158029, -0.158040,
    -0.176823, 0.176761,
    -0.173202, 0.173137,
    -1.276061, 1.275870,
    0.802491, -0.802143,
    -0.432510, 0.432374,
    0.457260, -0.457329,
};

float Cg_init[2] = {
    -0.643836, -0.643763
};

float xstd_init[12] = {
    0.001067, 0.000080, 0.010375, 0.079829, 0.002406, 0.000691, 0.076397, 0.154758, 0.000921, 0.000130, 0.019451, 0.072477
};

float xmean_init[12] = {
    0.006510, -0.007685, 0.003968, 0.142857, 0.008405, -0.006930, 0.095714, 0.438571, 0.004374, -0.007709, 0.009683, 0.135952
};

