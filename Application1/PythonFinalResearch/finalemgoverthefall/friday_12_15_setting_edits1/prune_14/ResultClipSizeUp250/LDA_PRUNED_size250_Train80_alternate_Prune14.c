// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_14\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.58%
// test_accuracy: 78.12%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_24.txt', 'act1\\trial_25.txt', 'act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_1.txt', 'act1\\trial_13.txt', 'act1\\trial_14.txt', 'act1\\trial_2.txt', 'act1\\trial_21.txt', 'act1\\trial_10.txt', 'act1\\trial_11.txt', 'act1\\trial_12.txt', 'act1\\trial_15.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_30.txt', 'act2\\trial_40.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-12 13:17:49
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.452303, 1.452312,
    0.324387, -0.324390,
    1.163655, -1.163654,
    0.524821, -0.524826,
    -0.450870, 0.450724,
    -0.117196, 0.117342,
    0.065120, -0.065117,
    0.478587, -0.478591,
    -0.386141, 0.386160,
    -0.298833, 0.298810,
    0.090718, -0.090709,
    0.375834, -0.375831,
};

float Cg_init[2] = {
    -0.586356, -0.586355
};

float xstd_init[12] = {
    0.004674, 0.002080, 0.325867, 0.119751, 0.001643, 0.000316, 0.067897, 0.144448, 0.000662, 0.000152, 0.044793, 0.151480
};

float xmean_init[12] = {
    0.010919, -0.005600, 0.423148, 1.026944, 0.003779, -0.007690, 0.022685, 0.641389, 0.003543, -0.007740, 0.012963, 0.696389
};

