// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.77%
// test_accuracy: 78.75%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_37.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt']}
// generated: 2025-12-12 12:42:11
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.293523, 1.293519,
    0.359999, -0.359977,
    0.487639, -0.487658,
    1.113434, -1.113420,
    -0.565812, 0.565858,
    0.074672, -0.074743,
    0.141805, -0.141803,
    -0.163099, 0.163117,
    -0.103631, 0.103581,
    0.020119, -0.019999,
    -0.433116, 0.433090,
    -0.145874, 0.145816,
};

float Cg_init[2] = {
    -0.541958, -0.541960
};

float xstd_init[12] = {
    0.004541, 0.001937, 0.141459, 0.197377, 0.001464, 0.000267, 0.036865, 0.097144, 0.000679, 0.000157, 0.027571, 0.103581
};

float xmean_init[12] = {
    0.010951, -0.005584, 0.251898, 0.697846, 0.003591, -0.007722, 0.013436, 0.088000, 0.003558, -0.007731, 0.012718, 0.122769
};

