// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_13\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 95.39%
// test_accuracy: 70.31%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_11.txt', 'act1\\trial_17.txt', 'act1\\trial_19.txt'], 'act2': ['act2\\trial_13.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt', 'act2\\trial_24.txt', 'act2\\trial_17.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt', 'act2\\trial_6.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt']}
// generated: 2025-12-17 17:05:52
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.482693, -0.482789,
    -0.057782, 0.058002,
    -0.365475, 0.365465,
    -0.321134, 0.321015,
    1.876984, -1.877061,
    -1.778733, 1.778808,
    -0.302300, 0.302292,
    0.385708, -0.385703,
    -0.365157, 0.365156,
    -1.363406, 1.363378,
    0.472260, -0.472239,
    2.458957, -2.458969,
};

float Cg_init[2] = {
    -0.951193, -0.951197
};

float xstd_init[12] = {
    0.000855, 0.000054, 0.004283, 0.058730, 0.000875, 0.000155, 0.016375, 0.061536, 0.003164, 0.000920, 0.113371, 0.212259
};

float xmean_init[12] = {
    0.005554, -0.007768, 0.000702, 0.083947, 0.002431, -0.007839, 0.006140, 0.054737, 0.008990, -0.006651, 0.138947, 0.480526
};

